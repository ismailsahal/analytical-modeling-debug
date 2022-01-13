//
// Created by andym on 7/26/2021.
//

#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include "Traverser.h"
//#include "../../flame/lib/Metric.h"
//#include "../../flame/lib/Measurable.h"

double Traverser::traverse(Flame::Machine AMM, std::map<Flame::Tasks*, std::vector<std::string>> CFG){
    int timeStep = 1;
    double time = 0.0;

    //Loop through and find paths for all tasks
    /*
    for (auto task : CFG) {
        //debug
        //task.first.path = AMM.path_to(task.first.target);

    }
     */


    int total_tasks = CFG.size();

    std::vector<std::string> completedTasks;

    std::vector<Flame::Tasks> running_tasks;


    //main loop, run until all tasks are complete

    while(completedTasks.size() < total_tasks){
        for (auto task : CFG) {

            //test if dependencies met
            bool dependencyFlag = true;
            for(std::string t : task.second){
                if (std::find(completedTasks.begin(), completedTasks.end(), t) == completedTasks.end()){
                    dependencyFlag = false;
                }
            }
            if(dependencyFlag){
                running_tasks.push_back(*task.first);
                task.first->time_step.push_back(time);
            }

        }

        if(running_tasks.size() == 0){
            std::cout << "Illegal Dependency Exists!!!";
            return time;
        }

        //calculate sharedMeasurables here
        // 
        // 
        
        //run prediction of task run independently
        std::map<Flame::Resource, std::vector<Flame::Tasks>> sharedMeasurables;
        for(Flame::Tasks t : running_tasks){
            t.predict = (AMM.predict(t, running_tasks, sharedMeasurables, Flame::Metric("TIME", 0))).value;
        }

        //

        Traverser::Contention(running_tasks, AMM);


        //find the first task to complete
        Flame::Tasks quickestTask = running_tasks[0];
        double quickestTime = running_tasks[0].predict;
        int indexOfQuickestTask = 0;
        for(int i = 0 ; i < running_tasks.size(); i++){
            if(quickestTime > running_tasks[i].predict){
                quickestTask = running_tasks[i];
                quickestTime = running_tasks[i].predict;
                indexOfQuickestTask = i;
            }
        }

        running_tasks.erase(running_tasks.begin() + indexOfQuickestTask);
        completedTasks.push_back(quickestTask.name);
        quickestTask.completion_percentage = 1;

        //update completion percentage for all running tasks
        for(int i = 0 ; i < running_tasks.size(); i++){
            running_tasks[i].completion_percentage = quickestTime/running_tasks[i].predict;
            //running_tasks[i].currContention.clear();
        }
        std::cout << timeStep << std::endl;
        timeStep++;
        time += 1;
    }

    return time;

}

void Traverser::Contention(std::vector<Flame::Tasks> running_tasks, Flame::Machine AMM){
    std::map<Flame::Resource, std::vector<Flame::Tasks>> sharedMeasurables;
    for(int i = 0; i < running_tasks.size(); ++i){
        std::vector<Flame::Resource> path = running_tasks[i].path;
        for (Flame::Resource resource : path) {
            sharedMeasurables[resource].push_back(running_tasks[i]);
        }
        double prediction = running_tasks[i].predict;

        //std::vector<bool[]> contentionMap;
        std::vector<Flame::Tasks> contention;
        //find overlapping paths, and contended elements
        for(int j = 0; j < running_tasks.size(); ++j){
            if(i == j){
                continue;
            }else{
                bool overlappingPath[path.size()];
                for(bool b:overlappingPath){
                    b = false;
                }
                Flame::Tasks comparedTasks = running_tasks[j];
                std::vector<Flame::Resource> comparedPath = comparedTasks.path;
                for (int i = 0; i < comparedPath.size(); i++) {
                    const Flame::Resource resourceToSearch = comparedPath[i];
                    if (std::find(path.begin(), path.end(), resourceToSearch) != path.end()) {
                        if (resourceToSearch.isMeasurable) {
                            sharedMeasurables[resourceToSearch].push_back(comparedTasks);
                        }
                    }
                }
                /*for(Flame::Resource elm: comparedTasks.path){//typecheck for measurable
                    if(std::find(path.begin(), path.end(), elm) != path.end()){
                        //overlappingPath[path.indexOf(elm)] = true;
                        if (elm.isMeasurable)
                            sharedMeasurables[elm].push_back(comparedTasks);
                    }
                }*/

                //contentionMap.push_back(overlappingPath);
                contention.push_back(running_tasks[j]);
                

            }
        }
        running_tasks[i].predict = AMM.predict(running_tasks[i], running_tasks, sharedMeasurables, Flame::Metric("TIME", 0)).value;
    }
    
}

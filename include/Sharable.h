//
// Created by andym on 8/13/2021.
//

#ifndef ANALYTICAL_MODELING_SHARABLE_H
#define ANALYTICAL_MODELING_SHARABLE_H
#include <vector>
//#include "../../Traverser/tasks/Tasks.h"

//Sharable refers to any Resource that multiple tasks can use simultaneously.
    //Sharable resources must implement contention handling, if infinite bandwidth/perf, slowdown can return 0
    //If a task is assinged to or uses a Resource that is not sharable and that Resource is in use, the Task will not have it's dependecies met

//Flow of prediction:
    //With a list of Running Tasks, map of all Resources being used and tasks using them will be created
    //each resource will make the function call Measurable::predict(Metric m, Tasks task, vector<Tasks>) FOR EACH Task using it
    //If multiple tasks are using Resource, predict independtly, then call Sharable::Slowdown(Tasks primary, vector<contention>)
    //predict will add on slowdown and return time back to Traverser
    //Greatest time from a resource for any Task will be the time estimate for that task.
namespace Flame{
    class Sharable {
        //virtual double slowdown(Tasks primary, std::vector<Tasks> contention);
    };
}



#endif //ANALYTICAL_MODELING_SHARABLE_H

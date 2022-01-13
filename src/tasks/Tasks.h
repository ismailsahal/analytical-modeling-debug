//
// Created by andym on 7/26/2021.
//

/*#ifndef ANALYTICAL_MODELING_TASKS_H
#define ANALYTICAL_MODELING_TASKS_H


#include <string>
#include <memory>
#include <vector>
#include "../../flame/lib/flame.h"

namespace Flame{
    class Resource;
};

class Tasks {
    public:
        double completion_percentage;
        std::string name;
        int predict;
        std::vector<Flame::Resource> path;
        std::vector<double> time_step;
        int FLOPs;
        int BYTEs;
        //std::vector<std::tuple<Tasks, std::vector<Flame::Resource>>> currContention;
        //TODO account for multiple targets
        //std::shared_ptr<Flame::Resource> target;

        Tasks(std::string _name, int _FLOPs, int _BYTEs){
            name = _name;

            completion_percentage = 0.0;
            predict = 0.0;

            FLOPs = _FLOPs;
            BYTEs = _BYTEs;

        }
        Tasks(){

        }
};


#endif //ANALYTICAL_MODELING_TASKS_H*/

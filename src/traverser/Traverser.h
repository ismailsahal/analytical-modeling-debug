//
// Created by andym on 7/26/2021.
//

#ifndef ANALYTICAL_MODELING_TRAVERSER_H
#define ANALYTICAL_MODELING_TRAVERSER_H

#include "../tasks/Tasks.h"
#include "../../include/flame.h"
//#include "../../flame/lib/flame.h"

#include <set>
#include <vector>

class Traverser {
    public:
        Traverser();
        double traverse(Flame::Machine AMM, std::map<Flame::Tasks*, std::vector<std::string>> CFG);
        void Contention(std::vector<Flame::Tasks> running_tasks, Flame::Machine AMM);
};


#endif //ANALYTICAL_MODELING_TRAVERSER_H

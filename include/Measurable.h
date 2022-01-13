/*//
// Created by andym on 8/13/2021.
//

#ifndef ANALYTICAL_MODELING_MEASURABLE_H
#define ANALYTICAL_MODELING_MEASURABLE_H
#include "Metric.h"
#include "../../Traverser/tasks/Tasks.h"
//If a Resource is measurable, a specific metric will be assigned to the Resource to predict on
//All children of Metric must implement their own predict function.

namespace Flame{
    class Measurable {
    public:
        Measurable();
        //Metric metric;
        //virtual double predict(Measurable m, Tasks primary, std::vector<Tasks> contention);
        //virtual double predict(Measurable m, Tasks primary, std::vector<Tasks> contention);
        //PCCS takes the total demand of the other contending tasks and considers 3 cases
        //where the boundaries are experimentally determined, meaning the information should come from MM
        Metric slowdown(Tasks primaryTask, std::vector<Tasks> contendingTasks, double BW) {//NEED TO OVERRIDE ACCORDING TO METRIC
            //double bandwidth = dynamic_cast<Resource*>(this)->get_trait("Bandwidth");
            double totalDemand = 0;
            for (Tasks t : contendingTasks) {
                totalDemand += t.BYTEs;
            }
            if (totalDemand < BW)
                return Metric("Bandwidth", primaryTask.BYTEs);
            else {
                return Metric("Bandwidth", primaryTask.BYTEs * BW / totalDemand);
            }
        }

        //Metric slowdown(Tasks primaryTask, std::vector<Tasks> contendingTasks, double POWER) {
        //}
    };
}



#endif //ANALYTICAL_MODELING_MEASURABLE_H*/

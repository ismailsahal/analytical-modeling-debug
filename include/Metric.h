//
// Created by andym on 8/13/2021.
//

#ifndef ANALYTICAL_MODELING_METRIC_H
#define ANALYTICAL_MODELING_METRIC_H
#include "flame.h"

//namespace Flame{
    //enum unit{"s", "FLOPS", "watt"};
    class Metric {
        public:
        std::string name;
        double value;
    
        Metric(std::string _name, double _value);
    };
//};
//Units: Singular physical unit, Watts, Seconds, Fahernheit, FLOPS
//Metric: is what is being measured, time, power, etc. (may specify unit)
    //Implemented in description of application model.
//Traits: Are measurable values for a Computer.
    // Implemented in description of hardware (i.e. Processor has FLOPS/s, or DRAM has LOPS/s)
    // passed as a parameter to ALL constructors of hardware elements
    // Typically a function of units FLOPS/s, Watts/s

#endif //ANALYTICAL_MODELING_METRIC_H

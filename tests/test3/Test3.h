//
// Created by andym on 9/13/2021.
//

#ifndef ANALYTICAL_MODELING_TEST1_H
#define ANALYTICAL_MODELING_TEST1_H

#include "../../flame/lib/flame.h"
#include "../../flame/lib/Measurable.h"
#include "../../flame/lib/Sharable.h"
//CPU
class CPU1 : public Flame::Processor, Flame::Measurable {
public:
    CPU1(std::unordered_map<std::string,double> traits);
    //double predict(std::vector<Flame::Tasks>);
    CPU1core1 core1;
    CPU1core2 core2;
};

class CPU1core1 : public Flame::Processor, Flame::Measurable {
public:
    CPU1(std::unordered_map<std::string,double> traits);
    //double predict(std::vector<Flame::Tasks>);
};

class CPU1core2 : public Flame::Processor, Flame::Measurable {
public:
    CPU1(std::unordered_map<std::string,double> traits);
    //double predict(std::vector<Flame::Tasks>);
};

//Controls task contention between component acessing memory
class cacheMC : public Flame::Resource, Flame::Measurable{
public:
    cacheMC(std::unordered_map<std::string,double> traits);
    double predict(std::vector<Tasks>);
};

class L2 : public  Flame::Memory{
    L2(std::unordered_map<std::string,double> traits);
};
//Connections
class Test3FSB : public Flame::Interconnect, Flame::Sharable{
public:
    XavierFSB(Flame::Resource &_start, Flame::Resource &_end);
};

class Test3 : public Flame::Machine{
public:
    Test3(std::unordered_map<std::string,double> traits);
};

#endif //ANALYTICAL_MODELING_TEST1_H

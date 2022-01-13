//
// Created by andym on 9/13/2021.
//
#ifndef ANALYTICAL_MODELING_TEST1_H
#define ANALYTICAL_MODELING_TEST1_H
#include "../../include/flame.h"
//#include "../../flame/lib/flame.h"
//#include "../../flame/lib/Measurable.h"
//#include "../../flame/lib/Sharable.h"

// //CPU
// class CPU : public Flame::Processor/*, Flame::Measurable*/ {
// public:
//     CPU(std::unordered_map<std::string,double> traits);
//     //double predict(std::vector<Flame::Tasks>);

// };
// //GPU
// class GPU : public Flame::Processor/*, /*Flame::Measurable*/ {
// public:
//     GPU(std::unordered_map<std::string,double> traits);
//     double predict(std::vector<Flame::Resource>);
// };
// //Deep Learning Accelorator
// class DLA : public Flame::Processor/*, /*Flame::Measurable*/{
// public:
//     DLA(std::unordered_map<std::string,double> traits);
//     double predict(std::vector<Flame::Resource>);
// };

// //DRAM
// class DDR4 : public Flame::Memory/*, /*Flame::Measurable*/{
// public:
//     DDR4(std::unordered_map<std::string,double> traits);
//     double predict(std::vector<Flame::Tasks>);
// };
// //Controls information passed between computational nodes
// //CHANGE TO Flame::Sharable ASAP
// class busController : public Flame::Resource/*, /*Flame::Measurable*/, Flame::Sharable{
// public:
//     busController(std::unordered_map<std::string,double> traits);
//     double predict(std::vector<Flame::Tasks>);
// };
// //Controls task contention between component acessing memory
// class MC : public Flame::Resource/*, /*Flame::Measurable*/{
// public:
//     MC(std::unordered_map<std::string,double> traits);
//     double predict(std::vector<Flame::Tasks>);
// };

// //Connections
// class Test1FSB : public Flame::Interconnect, Flame::Sharable{
// public:
//     Test1FSB(Flame::Resource &_start, Flame::Resource &_end);
// };

// class Test1 : public Flame::Machine{
// public:
//     Test1(std::unordered_map<std::string,double> traits);
// };

#endif //ANALYTICAL_MODELING_TEST1_H

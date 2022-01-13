//
// Created by andym on 9/13/2021.
//

#include "Test3.h"

CPU1::CPU1(std::unordered_map<std::string, double> traits):
Flame::Processor(traits)
{
    core1 = new CPU1core1(traits);
    core2 = new CPU1core2(traits);
}

cacheMC::cacheMC(std::unordered_map<std::string, double> traits) :
Flame::Resource(traits)
{
}

L2::L2(std::unordered_map<std::string, double> traits) :
Flame::Memory(traits)
{
}
Test3FSB::Test3FSB(Flame::Resource &_start, Flame::Resource &_end):
Flame::Interconnect(_start, _end)
{
}

Test3::Test3(std::unordered_map<std::string, double> traits):
Flame::Machine(traits)
{
    CPU1 cpu1(traits);
    cacheMC mc(traits);
    L2 l2(traits);

    Test3FSB core1bus(cpu1.core1, mc);
    //connect(&corebus)

    Test3FSB core2bus(cpu1.core2, cacheMC);
    //connect(&gpubus)

    Test3FSB mcbus(mc, l2);

}
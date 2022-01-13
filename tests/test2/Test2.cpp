//
// Created by andym on 9/13/2021.
//

#include "Test2.h"

CPU::CPU(std::unordered_map<std::string, double> traits):
Flame::Processor(traits)
{
}
GPU::GPU(std::unordered_map<std::string, double> traits):
Flame::Processor(traits)
{
}
DLA::DLA(std::unordered_map<std::string, double> traits) :
Flame::Processor(traits)
{
}

DDR4::DDR4(std::unordered_map<std::string, double> traits) :
Flame::Memory(traits)
{
}

double DDR4::predict(std::vector<Tasks>) {
    return 0;
}

busController::busController(std::unordered_map<std::string, double> traits) :
Flame::Resource(traits)
{
}

double busController::predict(std::vector<Tasks>) {
    return 0;
}

MC::MC(std::unordered_map<std::string, double> traits) :
Flame::Resource(traits)
{
}

double MC::predict(std::vector<Tasks>) {
    return 0;
}

Test2FSB::Test2FSB(Flame::Resource &_start, Flame::Resource &_end):
Flame::Interconnect(_start, _end)
{
}

Test2::Test2(std::unordered_map<std::string, double> traits):
Flame::Machine(traits)
{
    CPU cpu(traits);
    GPU gpu(traits);
    DLA dla(traits);
    DDR4 ddr4(traits);
    MC mc(traits);
    busController bc(traits);

    Test2FSB cpuBus(cpu, bc);
    Test2FSB gpuBus(gpu, bc);
    Test2FSB dlaBus(gpu, bc);
    Test2FSB memBus(ddr4, mc);
    Test2FSB mcBus(mc,bc)

}
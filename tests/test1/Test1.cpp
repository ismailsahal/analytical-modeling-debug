//
// Created by andym on 9/13/2021.
//

#include "Test1.h"


// CPU::CPU(std::unordered_map<std::string, double> traits):
// Flame::Processor(traits)
// {
// }
// GPU::GPU(std::unordered_map<std::string, double> traits):
// Flame::Processor(traits)
// {
// }
// DLA::DLA(std::unordered_map<std::string, double> traits) :
// Flame::Processor(traits)
// {
// }

// DDR4::DDR4(std::unordered_map<std::string, double> traits) :
// Flame::Memory(traits)
// {
// }

// double DDR4::predict(std::vector<Flame::Tasks>) {
//     return 0;
// }

// busController::busController(std::unordered_map<std::string, double> traits) :
// Flame::Resource(traits)
// {
// }

// double busController::predict(std::vector<Flame::Tasks>) {
//     return 0;
// }

// MC::MC(std::unordered_map<std::string, double> traits) :
// Flame::Resource(traits)
// {
// }

// double MC::predict(std::vector<Flame::Tasks>) {
//     return 0;
// }

// Test1FSB::Test1FSB(Flame::Resource &_start, Flame::Resource &_end):
// Flame::Interconnect(_start, _end)
// {
// }

// Test1::Test1(std::unordered_map<std::string, double> traits):
// Flame::Machine(traits)
// {
//     CPU cpu(traits);
//     GPU gpu(traits);
//     DLA dla(traits);
//     DDR4 ddr4(traits);
//     MC mc(traits);
//     busController bc(traits);

//     Test1FSB cpuBus(cpu, bc);
//     Test1FSB gpuBus(gpu, bc);
//     Test1FSB dlaBus(gpu, bc);
//     Test1FSB memBus(ddr4, mc);
//     Test1FSB mcBus(mc,bc);

// }
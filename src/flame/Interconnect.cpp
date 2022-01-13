//
// Created by andym on 8/13/2021.
//


#include "flame.h"
/*
Flame::Interconnect::Interconnect(Flame::Resource *_start, Flame::Resource *_end)
{
    start = _start;
    end = _end;
}
/*
Flame::Interconnect::Interconnect()
    //start(nullptr),
    //end(nullptr)
{
}

*/


Flame::Interconnect::Interconnect(Flame::Resource &_start, Flame::Resource &_end):
    start(_start),
    end(_end)
{

}
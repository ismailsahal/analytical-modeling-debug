#ifndef FLAME_H
#define FLAME_H
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>
#include <memory>
#include <map>
//#include "../../Traverser/tasks/Tasks.h"
//#include "Metric.h"
//#include "Measurable.h"
#include <climits>
//#include "resource.h"
//#include "interconnect.h"

// Dummy classes in order to compile Zynq example
namespace Flame {
    //forward class resource to sidestep cyclic dependency
    class Resource;
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
    
    class Metric {
        public:
        std::string name;
        double value;
    
        Metric(std::string _name, double _value);
    };

    class Interconnect {
    protected:
        Interconnect(Flame::Resource &_start, Flame::Resource &_end);
        Interconnect();

        Resource &start;
        Resource &end;

        double bandwidth = INT_MAX;

        void setBandwidth(double _bandwidth){
            bandwidth = _bandwidth;
        }
    };
    class Resource {
    public:
        bool in_use = false;    //is any running task currently using this task?
        double get_trait(std::string trait);
        //std::vector<std::shared_ptr<Resource>> path_to(std::shared_ptr<Resource> target);
        void connect(Flame::Interconnect *other);
        virtual ~Resource() = default;
        bool isMeasurable;
        //double predict(std::vector<bool[]> covcpkg install boost-testntentionMap, std::vector<Tasks> contention);
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
        bool operator <( const Resource &rhs ) const {
            return ( _traits.at("Bandwidth") < rhs._traits.at("Bandwidth"));
        }
        bool operator==(const Resource &rhs) const {
            return this == &rhs;
        }
    protected:
        Resource();
        Resource(std::unordered_map<std::string, double> traits);
        Resource(std::unordered_map<std::string, double> traits, bool isMeasurable);
    private:
        std::unordered_set<Flame::Interconnect*> _connections;
        std::unordered_map<std::string, double> _traits;
    };


    class Processor : public Resource {
    public:
        //How will the calculation of shared measurables be affected by the type of metric to predict
        Metric predict(Tasks t, std::vector<Tasks> running_tasks, std::map<Resource, std::vector<Tasks>> sharedMeasurables, Metric metricToPredict) {
            unsigned int noOfRunningTasks = running_tasks.size();
            std::vector<Flame::Resource> pathOfTask = t.path;
            enum METRICS { TIME, POWER, };
            //switch(metricToPredict.name) TRY TO CONVERT IF TO SWITCH CASES
            if (metricToPredict.name == "TIME") {
                double predictedRuntime = 0;
                double maxFPPerformance = this->get_trait("FLOPS");//ask about this
                double operationalIntensity = t.FLOPs / t.BYTEs;

                if (sharedMeasurables.size() != 0) {
                    double minMemBandwidth = std::numeric_limits<double>::max();
                    for (Resource resource : pathOfTask) {
                        if (resource.isMeasurable) {
                            double bw = resource.slowdown(t, sharedMeasurables.at(resource), resource.get_trait("Bandwidth")).value;
                            if (bw < minMemBandwidth) {
                                minMemBandwidth = bw;
                            }
                        }
                        /*if (Measurable* isMeasurable = dynamic_cast<Measurable*>(&resource)) {//probably won't need typecheck
                            //std::vector<Tasks> sharedOnes = sharedMeasurables[std::find(sharedMeasurables.begin(), sharedMeasurables.end(), t)];
                            double bw = 0; //dynamic_cast<Measurable*>(&resource)->slowdown(t, sharedMeasurables.at(*isMeasurable), resource.get_trait("Bandwidth")).value;
                            if (bw < minMemBandwidth) {
                                minMemBandwidth = bw;
                            }
                        }*/
                    }
                    double computationTime = t.FLOPs / maxFPPerformance;
                    double dataCapacity = t.FLOPs / operationalIntensity; //GABLES
                    double memoryTime = dataCapacity / minMemBandwidth;
                    /*double availableThroughput = std::min(minMemBandwidth * operationalIntensity, maxFPPerformance);
                    return Metric(metricToPredict.name, t.FLOPs / availableThroughput);*/
                    return Metric(metricToPredict.name, std::max(computationTime, memoryTime));
                }
                //may need a helper function to return slowest BW on the path to find if mem-bound or computer-bound
                return Metric(metricToPredict.name, t.FLOPs / maxFPPerformance);//need to modify to take mem BW into account
            }
            else if (metricToPredict.name == "POWER") {}
            else if (metricToPredict.name == "FLOPSPERWATT")
                double predictedRuntime = 0;
            double maxFPPerformance = this->get_trait("FLOPS");//ask about this
            double operationalIntensity = t.FLOPs / t.BYTEs;

            /*if (sharedMeasurables.size() != 0) {
                double minMemBandwidth = std::numeric_limits<double>::max();
                for (Resource resource : pathOfTask) {
                    if (Measurable* isMeasurable = dynamic_cast<Measurable*>(&resource)) {//probably won't need typecheck
                        double bw = 0;//dynamic_cast<Measurable*>(&resource)->slowdown(t, sharedMeasurables.at(*isMeasurable), resource.get_trait("Bandwidth")).value;
                        if (bw < minMemBandwidth) {
                            minMemBandwidth = bw;
                        }
                    }
                }
                double availableThroughput = std::min(minMemBandwidth * operationalIntensity, maxFPPerformance);
                return Metric(metricToPredict.name, t.FLOPs / availableThroughput);
            }*/
            return Metric(metricToPredict.name, t.FLOPs / maxFPPerformance);
        }
        
        /*double predict(std::vector<Tasks>){
           return 0;
        }*/
    protected:
        Processor(std::unordered_map<std::string, double> traits): Resource(traits) {}

    };
    class Memory: public Resource {
    protected:
        Memory(std::unordered_map<std::string, double> traits): Resource(traits) {}
    };
    class Machine: public Resource {
    public:
        //Abstract method for getting components of machine
        //virtual std::vector<Resource> getComponent() = 0;
        Metric predict(Tasks t, std::vector<Tasks> running_tasks, std::map<Resource, std::vector<Tasks>> sharedMeasurables, Metric metricToPredict){
            return dynamic_cast<Processor*>(&(t.path[0]))->predict(t, running_tasks, sharedMeasurables, metricToPredict);
        }
    protected:
        Machine(std::unordered_map<std::string, double> traits): Resource(traits) {}
    };
    class Switch: public Resource {
    protected:
        Switch(std::unordered_map<std::string, double> traits): Resource(traits) {}
    };
}

// The parser assumes any concrete class is outside the Flame namespace
class L2: public Flame::Resource {
    public:
        void connect_pinA(std::shared_ptr<Flame::Resource> resource) {};
        L2(std::unordered_map<std::string, double> traits): Resource(traits) {}
    };

#endif // FLAME_H
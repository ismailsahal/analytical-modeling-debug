//
// Created by andym on 9/19/2021.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "../src/traverser/Traverser.h"

//#include "../Traverser/src/Traverser.h"
#include "./test1/Test1.h"
//#include "Test#2/Test2.h"

namespace json = boost::property_tree::json_parser;
namespace pt = boost::property_tree;


std::map<Flame::Tasks*, std::vector<std::string>> createCFG(std::string fileName){
    //readin JSON file
    pt::ptree  root;
    pt::read_json(fileName, root);
    std::map<Flame::Tasks*, std::vector<std::string>> CFG;

    //establish tasks and map dependencies
    for(auto taskJSON : root.get_child("application")){
        Flame::Tasks* task = new Flame::Tasks(taskJSON.second.get<std::string>("name"), taskJSON.second.get<int>("GFLOPs"),taskJSON.second.get<int>("GBYTEs"));
        std::vector<std::string> depends;
        for(pt::ptree::value_type &dependency : taskJSON.second.get_child("depends")){
            depends.push_back(dependency.second.data());
        }
        CFG.insert({task, depends});
    }
    return CFG;
}
BOOST_AUTO_TEST_SUITE( test_suite )

BOOST_AUTO_TEST_CASE(test_case1){
    std::unordered_map<std::string,double> traits;

    //Test1 AMM(traits);

    std::string filename = "test1App.json";
    std::map<Flame::Tasks*, std::vector<std::string>> CFG = createCFG(filename);

    Traverser* traverse = new Traverser();

//    double x = traverse->traverse(AMM, CFG);

   // BOOST_CHECK(x == 0.0);
}

/*
BOOST_AUTO_TEST_CASE( test_case2 ){
    std::unordered_map<std::string,double> traits;

    Test1 AMM(traits);

    std::string filename = "test2App.json";
    std::map<Tasks*, std::vector<std::string>> CFG = createCFG(filename);

    Traverser traverser;

    double x = traverser.traverse(AMM, CFG);

    BOOST_CHECK(x == 0.0);

}*/

BOOST_AUTO_TEST_SUITE_END()


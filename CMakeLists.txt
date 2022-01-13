cmake_minimum_required(VERSION 3.13)

project(analytical-modeling VERSION 1.0 LANGUAGES C CXX)
set (Boost_USE_STATIC_LIBS OFF)

find_package(Boost COMPONENTS system filesystem REQUIRED)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIR} include tests tests/test1 tests/test2 tests/test3 src src/flame src/tasks/ src/traverser)

#add_subdirectory(include)


#add_subdirectory(src/flame)
#add_subdirectory(src/tasks)
#add_subdirectory(tests/test1)

#include(include/CMakeLists.txt)
#include(src/flame/CMakeLists.txt)
#include(src/traverser/CMakeLists.txt)
#include(src/tasks/CMakeLists.txt)
#include(tests/test1/CMakeLists.txt)

set(SOURCES /home/ismail/analytical-modeling-clear/tests/unitTests.cpp /home/ismail/analytical-modeling-clear/include/flame.h /home/ismail/analytical-modeling-clear/src/traverser/Traverser.h /home/ismail/analytical-modeling-clear/src/tasks/Tasks.h /home/ismail/analytical-modeling-clear/src/flame/Interconnect.cpp /home/ismail/analytical-modeling-clear/tests/test1/Test1.h)


set(SOURCE_DIRS ./tests ./include ./src/traverser ./src/tasks ./src/flame ./tests/test1)


#find_library(SOURCE_DIRS ./tests ./include ./src/traverser ./src/tasks ./src/flame ./tests/test1)

set(CMAKE_BUILD_TYPE Debug)

add_executable(Boost_Tests_run ${SOURCES})

#link_directories(${SOURCE_DIRS})
#target_link_directories(Boost_Tests_run PUBLIC ${Boost_LIBRARIES} ${SOURCE_DIRS})
target_link_libraries(Boost_Tests_run PUBLIC ${BOOST_LIBRARIES} ${SOURCES})

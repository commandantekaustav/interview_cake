cmake_minimum_required(VERSION 3.17)
project(mySolutions)

set(CMAKE_CXX_STANDARD 11)
#add_library(lest.hpp)
#add_executable(MergingMeetingProblems MergingMeetingProblems.cpp)
#add_executable(ReverseStringInPlace ReverseStringInPlace.cpp)
#add_executable(ReverseWords ReverseWords.cpp)
#add_executable(CafeOrderChecker CafeOrderChecker.cpp)
add_executable(Output CafeOrderChecker.cpp MergingMeetingProblems.cpp ReverseWords.cpp ReverseStringInPlace.cpp)

cmake_minimum_required(VERSION 3.25)
project(CppPrimerPlus)
set(CMAKE_CXX_STANDARD 17)


# usestock0
include_directories(${PROJECT_SOURCE_DIR}/chapter10/usestock0/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/chapter10/usestock0/source USESTOCK0_SRC_LIST)
add_executable(usestock0 ${USESTOCK0_SRC_LIST})

# StringBad
include_directories(${PROJECT_SOURCE_DIR}/chapter12/StringBad/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/chapter12/StringBad/source STRINGBAD_SRC_LIST)
add_executable(StringBad ${STRINGBAD_SRC_LIST})

# observer pattern
include_directories(DesignPattern/ObserverPattern/include)
aux_source_directory(DesignPattern/ObserverPattern/source OBSERVER_PATTERN_SRC_LIST)
add_executable(ObserverPattern ${OBSERVER_PATTERN_SRC_LIST})
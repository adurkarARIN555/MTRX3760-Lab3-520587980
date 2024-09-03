cmake_minimum_required(VERSION 3.10) # Ensures CMake version is recent enough
project(Lab3) # Name of this project
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall") # Show warnings
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY # Destination for generated executable
${CMAKE_SOURCE_DIR}/bin
)
include_directories( # Where are the header files
"${PROJECT_SOURCE_DIR}/include"
)
add_executable( lab3 # Instructions for making “lab3”
src/Wire.cpp # could also use nested CMakeLists.txt
src/LogicGate.cpp # instead of listing src/...
src/AndGate.cpp
src/OrGate.cpp
src/XorGate.cpp
src/NotGate.cpp
src/ReadText.cpp
src/BuildCircuit.cpp
src/Test.cpp
main.cpp
)
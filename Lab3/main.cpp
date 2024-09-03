//!
//  Logic Simulator Redesign as a Multi-file Project:
//  Description: Defines classes and functionalities for dynamically constructing and simulating combinatorial logic circuits.
//  
//  This code supports a variety of logic gates like; AND, OR, XOR, and NOT.
//  It also allows for dynamic circuit construction and simulation based on textual descriptions.
//  The functionalities are as follows:
//  - Construction of Logic gates like; AND, OR, XOR, NOT.
//  - Dynamic creation of circuits from descriptive text files.
//  - Simulation and validation of circuits like Half Adder and 1-Bit Comparator.
//  
//  This implementation is modular and extendable and can hence add new sub-circuits.
// 
//  Author: Arin Adurkar
//  Date: September 2024
//  
//  Copyright (c) 2024 Arin Adurkar
//

#include "BuildCircuit.hpp"
#include "ReadText.hpp"
#include "Test.hpp"

int main() {
    // Object of BildCircuit class created.
    BuildCircuit circuit;

    // Reading circuit description from text file.
    ReadText::readCircuitDescription(circuit);

    // Running tests of the sub-circuit with different inputs.
    Test::runTests(circuit);

    return 0;
}

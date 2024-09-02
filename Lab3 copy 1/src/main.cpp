// #include <iostream>
// #include <vector>

// #include "include/eLogicLevel.h"

// #include "include/LogicGate.h"

// #include "include/Wire.h"

// #include "include/AndGate.h"
// #include "include/OrGate.h"
// #include "include/NotGate.h"
// #include "include/XorGate.h"

// #include "include/ReadText.h"
// #include "include/BuildCircuit.h"
// #include "include/Test.h"

// int main(void)
// {
//     return 0;
// }

#include "BuildCircuit.hpp"
#include "ReadText.hpp"
#include "Test.hpp"

int main() {
    BuildCircuit circuit;

    ReadText::readCircuitDescription(circuit);
    Test::runTests(circuit);

    return 0;
}

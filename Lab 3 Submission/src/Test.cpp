#include "Test.hpp"
#include <iostream>

// Function to run tests for a combination of inputs to the sub-circuits
void Test::runTests(BuildCircuit& circuit)
{
    //  Setting inputs and checking outputs
    circuit.setInput("inWireA", eLogicLevel::HIGH);
    circuit.setInput("inWireB", eLogicLevel::LOW);
    circuit.setInput("inWireC", eLogicLevel::HIGH);

    // Computing outputs for all gates
    for (const auto& gate : {"myXor0", "myAnd0", "myAnd1"})
    {
        eLogicLevel output = circuit.getOutput(gate);
        std::cout << "Output of " << gate << ": " << static_cast<int>(output) << std::endl;
    }
}

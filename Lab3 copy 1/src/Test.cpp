#include "Test.h"
#include <iostream>

void Test::runTests(BuildCircuit& circuit) {
    // Example to manually set inputs and check outputs
    circuit.setInput("inWireA", eLogicLevel::HIGH);
    circuit.setInput("inWireB", eLogicLevel::LOW);
    circuit.setInput("inWireC", eLogicLevel::HIGH);

    // Compute outputs for all gates
    for (const auto& gate : {"myXor0", "myAnd0", "myAnd1"}) {
        eLogicLevel output = circuit.getOutput(gate);
        std::cout << "Output of " << gate << ": " << static_cast<int>(output) << std::endl;
    }
}

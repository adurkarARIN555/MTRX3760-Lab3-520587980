#include "AndGate.hpp"

// Constructor 
AndGate::AndGate(const std::string& name) : LogicGate(name, 2) {}

// Computes the output of the AND gate
// The output is HIGH only if both inputs are HIGH, otherwise it is LOW
void AndGate::ComputeOutput()
{
    output = (inputs[0] == eLogicLevel::HIGH && inputs[1] == eLogicLevel::HIGH) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}

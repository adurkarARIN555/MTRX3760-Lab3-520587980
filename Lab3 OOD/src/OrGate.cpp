#include "OrGate.hpp"

// Constructor
OrGate::OrGate(const std::string& name) : LogicGate(name, 2) {}

// Computes the output of the OR gate
// The output is HIGH if at least one input is HIGH, otherwise it is LOW
void OrGate::ComputeOutput()
{
    output = (inputs[0] == eLogicLevel::HIGH || inputs[1] == eLogicLevel::HIGH) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}
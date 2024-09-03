#include "NotGate.hpp"

// Constructor
NotGate::NotGate(const std::string& name) : LogicGate(name, 1) {}

// Computes the output of the NOT gate
// The output is the inverse of the input: HIGH if the input is LOW, and vice versa
void NotGate::ComputeOutput()
{
    output = (inputs[0] == eLogicLevel::LOW) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}
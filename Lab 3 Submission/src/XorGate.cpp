#include "XorGate.hpp"

// Constructor
XorGate::XorGate(const std::string& name) : LogicGate(name, 2) {}

// Computes the output of the XOR gate
// The output is HIGH if exactly one of the inputs is HIGH, otherwise it is LOW
void XorGate::ComputeOutput()
{
    output = (inputs[0] != inputs[1]) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}
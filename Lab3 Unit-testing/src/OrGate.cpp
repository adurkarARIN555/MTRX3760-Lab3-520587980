#include "OrGate.hpp"

OrGate::OrGate(const std::string& name) : LogicGate(name, 2) {}

void OrGate::ComputeOutput()
{
    output = (inputs[0] == eLogicLevel::HIGH || inputs[1] == eLogicLevel::HIGH) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}
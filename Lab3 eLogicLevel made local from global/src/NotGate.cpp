#include "NotGate.hpp"

NotGate::NotGate(const std::string& name) : LogicGate(name, 1) {}

void NotGate::ComputeOutput()
{
    output = (inputs[0] == eLogicLevel::LOW) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}
#include "NotGate.h"

NotGate::NotGate(const std::string& name) : LogicGate(name, 1) {}

void NotGate::compute() {
    output = (inputs[0] == eLogicLevel::LOW) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}

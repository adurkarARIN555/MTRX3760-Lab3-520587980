#include "AndGate.h"

AndGate::AndGate(const std::string& name) : LogicGate(name, 2) {}

void AndGate::compute() {
    output = (inputs[0] == eLogicLevel::HIGH && inputs[1] == eLogicLevel::HIGH) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}

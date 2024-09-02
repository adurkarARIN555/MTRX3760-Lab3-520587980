#include "XorGate.h"

XorGate::XorGate(const std::string& name) : LogicGate(name, 2) {}

void XorGate::compute() {
    output = (inputs[0] != inputs[1]) ? eLogicLevel::HIGH : eLogicLevel::LOW;
}

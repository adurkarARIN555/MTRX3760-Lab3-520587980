#include "LogicGate.h"

LogicGate::LogicGate(const std::string& gateName, int numInputs) : name(gateName), inputs(numInputs, eLogicLevel::LOW), output(eLogicLevel::LOW) {}

void LogicGate::setInput(int index, eLogicLevel level) {
    if(index >= 0 && index < inputs.size()) {
        inputs[index] = level;
    }
}

eLogicLevel LogicGate::getOutput() const {
    return output;
}

std::string LogicGate::getName() const {
    return name;
}

#include "LogicGate.hpp"

// Constructor initializes the gate with the given name and number of inputs
LogicGate::LogicGate(const std::string& gateName, int numInputs) : name(gateName), inputs(numInputs, eLogicLevel::LOW), output(eLogicLevel::LOW) {}

// Sets the input value at the specified index in the inputs vector
void LogicGate::setInput(int index, eLogicLevel level)
{
    if(index >= 0 && index < inputs.size())
    {
        inputs[index] = level;
    }
}

// Returns the computed output value
eLogicLevel LogicGate::getOutput() const
{
    return output;
}

// Returns the name of the gate
std::string LogicGate::getName() const
{
    return name;
}
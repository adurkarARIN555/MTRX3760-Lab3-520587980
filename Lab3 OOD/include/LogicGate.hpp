#ifndef LOGICGATE_HPP
#define LOGICGATE_HPP

#include <vector>
#include <string>
#include "Wire.hpp"

// Base class for all logic gates, providing common interface and functionality.
class LogicGate
{
    public:
        // Constructor initializing the gate with a name and number of inputs
        LogicGate(const std::string& gateName, int numInputs);

        // Virtual destructor for safe polymorphic use
        virtual ~LogicGate() = default;

        // Set an input value at the specified index
        void setInput(int index, eLogicLevel level);

        eLogicLevel getOutput() const;

        // function to compute the output based on inputs
        virtual void ComputeOutput() = 0;

        // return the nanme of the gate.
        std::string getName() const;
    protected:
        std::string name;                   // Name of the gate
        std::vector<eLogicLevel> inputs;    // Vector storing the input logic levels
        eLogicLevel output;                 // Logic level of the output
};

#endif // LOGICGATE_HPP
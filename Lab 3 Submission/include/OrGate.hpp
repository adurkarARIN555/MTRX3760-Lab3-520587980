#ifndef ORGATE_HPP
#define ORGATE_HPP

#include "LogicGate.hpp"

// Class representing an OR gate, inherits from LogicGate.
class OrGate : public LogicGate
{
    public:
        // Constructor
        OrGate(const std::string& name);

        // Computes the output of the OR gate based on the inputs
        void ComputeOutput() override;
};

#endif // ORGATE_HPP
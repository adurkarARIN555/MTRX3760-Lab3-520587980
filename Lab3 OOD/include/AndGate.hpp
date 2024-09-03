#ifndef ANDGATE_HPP
#define ANDGATE_HPP

#include "LogicGate.hpp"

// Class representing an AND gate, inherits from LogicGate.
class AndGate : public LogicGate
{
    public:
        // Constructor
        AndGate(const std::string& name);

        // Computes the output of the AND gate based on the inputs
        void ComputeOutput() override;
};

#endif // ANDGATE_HPP
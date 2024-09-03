#ifndef XORGATE_HPP
#define XORGATE_HPP

#include "LogicGate.hpp"

// Class representing an XOR gate, inherits from LogicGate.
class XorGate : public LogicGate
{
    public:
        // Constructor
        XorGate(const std::string& name);
    
        // Computes the output of the XOR gate based on the inputs
        void ComputeOutput() override;
};

#endif // XORGATE_HPP
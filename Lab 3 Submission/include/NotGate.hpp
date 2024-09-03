#ifndef NOTGATE_HPP
#define NOTGATE_HPP

#include "LogicGate.hpp"

// Class representing a NOT gate, inherits from LogicGate.
class NotGate : public LogicGate
{
    public:
        // Constructor
        NotGate(const std::string& name);

        // Computes the output of the NOT gate based on the input
        void ComputeOutput() override;
};

#endif // NOTGATE_HPP
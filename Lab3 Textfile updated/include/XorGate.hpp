#ifndef XORGATE_HPP
#define XORGATE_HPP

#include "LogicGate.hpp"

class XorGate : public LogicGate
{
    public:
        XorGate(const std::string& name);
        void ComputeOutput() override;
};

#endif // XORGATE_HPP
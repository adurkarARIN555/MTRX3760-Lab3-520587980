#ifndef ORGATE_HPP
#define ORGATE_HPP

#include "LogicGate.hpp"

class OrGate : public LogicGate
{
    public:
        OrGate(const std::string& name);
        void ComputeOutput() override;
};

#endif // ORGATE_HPP
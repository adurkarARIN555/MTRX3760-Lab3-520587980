#ifndef ANDGATE_HPP
#define ANDGATE_HPP

#include "LogicGate.hpp"

class AndGate : public LogicGate
{
    public:
        AndGate(const std::string& name);
        void ComputeOutput() override;
};

#endif // ANDGATE_HPP
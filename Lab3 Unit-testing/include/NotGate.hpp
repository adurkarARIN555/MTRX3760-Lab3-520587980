#ifndef NOTGATE_HPP
#define NOTGATE_HPP

#include "LogicGate.hpp"

class NotGate : public LogicGate
{
    public:
        NotGate(const std::string& name);
        void ComputeOutput() override;
};

#endif // NOTGATE_HPP
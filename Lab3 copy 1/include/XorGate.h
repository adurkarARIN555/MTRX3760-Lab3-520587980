#ifndef XORGATE_H
#define XORGATE_H

#include "LogicGate.h"

class XorGate : public LogicGate {
public:
    XorGate(const std::string& name);
    void compute() override;
};

#endif // XORGATE_H

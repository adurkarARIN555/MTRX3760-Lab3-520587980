#ifndef ORGATE_H
#define ORGATE_H

#include "LogicGate.h"

class OrGate : public LogicGate {
public:
    OrGate(const std::string& name);
    void compute() override;
};

#endif // ORGATE_H

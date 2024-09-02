#ifndef ANDGATE_H
#define ANDGATE_H

#include "LogicGate.h"

class AndGate : public LogicGate {
public:
    AndGate(const std::string& name);
    void compute() override;
};

#endif // ANDGATE_H

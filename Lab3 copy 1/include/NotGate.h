#ifndef NOTGATE_H
#define NOTGATE_H

#include "LogicGate.h"

class NotGate : public LogicGate {
public:
    NotGate(const std::string& name);
    void compute() override;
};

#endif // NOTGATE_H

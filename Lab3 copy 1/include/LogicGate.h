#ifndef LOGICGATE_H
#define LOGICGATE_H

#include "eLogicLevel.h"
#include <vector>
#include <string>

class LogicGate {
protected:
    std::string name;
    std::vector<eLogicLevel> inputs;
    eLogicLevel output;

public:
    LogicGate(const std::string& gateName, int numInputs);
    virtual ~LogicGate() = default;

    void setInput(int index, eLogicLevel level);
    eLogicLevel getOutput() const;

    virtual void compute() = 0;

    std::string getName() const;
};

#endif // LOGICGATE_H

#ifndef WIRE_H
#define WIRE_H

#include "eLogicLevel.h"
#include <string>

class Wire {
    std::string name;
    eLogicLevel level;

public:
    Wire(const std::string& wireName, eLogicLevel initialLevel = eLogicLevel::LOW);
    void setLevel(eLogicLevel level);
    eLogicLevel getLevel() const;
    std::string getName() const;
};

#endif // WIRE_H

#include "Wire.hpp"

Wire::Wire(const std::string& wireName, eLogicLevel initialLevel) : name(wireName), level(initialLevel) {}

void Wire::setLevel(eLogicLevel level)
{
    this->level = level;
}

eLogicLevel Wire::getLevel() const
{
    return level;
}

std::string Wire::getName() const
{
    return name;
}

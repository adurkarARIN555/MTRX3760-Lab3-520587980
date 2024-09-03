#include "Wire.hpp"

// Constructor initialising the wire with a name. Default argument of eLogicLevel LOW is assigned.
Wire::Wire(const std::string& wireName, eLogicLevel initialLevel) : name(wireName), level(initialLevel) {}

// Sets the logic level on the wire
void Wire::setLevel(eLogicLevel level)
{
    this->level = level;
}

// Returns the current logic level on the wire
eLogicLevel Wire::getLevel() const
{
    return level;
}

// Returns the name of the wire
std::string Wire::getName() const
{
    return name;
}

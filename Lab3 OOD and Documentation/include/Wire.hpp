#ifndef WIRE_HPP
#define WIRE_HPP

#include <string>

// enum defining the possible states of a logic line
enum class eLogicLevel
{
    UNDEFINED = -1,     // undefined gate state
    LOW = 0,            // by-default value is set to 0
    HIGH = 1            // by-default value is set to 1
};

// Class representing a wire in the circuit, which carries a logic level.
class Wire
{
    public:
        // Constructor initialising the wire with a name. Default argument of eLogicLevel LOW is assigned.
        Wire(const std::string& wireName, eLogicLevel initialLevel = eLogicLevel::LOW);

        // Sets the logic level on the wire
        void setLevel(eLogicLevel level);
        eLogicLevel getLevel() const;

        // Returns the name of the wire
        std::string getName() const;
    protected:
        std::string name;               // Name of the wire
        eLogicLevel level;              // Current logic level on the wire
};

#endif // WIRE_HPP
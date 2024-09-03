#ifndef WIRE_HPP
#define WIRE_HPP

#include <string>

enum class eLogicLevel
{
    UNDEFINED = -1,
    LOW = 0,
    HIGH = 1
};

class Wire
{
    public:
        Wire(const std::string& wireName, eLogicLevel initialLevel = eLogicLevel::LOW);
        void setLevel(eLogicLevel level);
        eLogicLevel getLevel() const;
        std::string getName() const;
    protected:
        std::string name;
        eLogicLevel level;
};

#endif // WIRE_HPP
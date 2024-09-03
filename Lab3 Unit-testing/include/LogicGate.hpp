#ifndef LOGICGATE_HPP
#define LOGICGATE_HPP

#include <vector>
#include <string>
#include "Wire.hpp"
// enum class eLogicLevel
// {
//     UNDEFINED = -1,
//     LOW = 0,
//     HIGH = 1
// };

class LogicGate
{
    public:
        LogicGate(const std::string& gateName, int numInputs);
        virtual ~LogicGate() = default;
        void setInput(int index, eLogicLevel level);
        eLogicLevel getOutput() const;
        virtual void ComputeOutput() = 0;
        std::string getName() const;
    protected:
        std::string name;
        std::vector<eLogicLevel> inputs;
        eLogicLevel output;
};

#endif // LOGICGATE_HPP
#ifndef BUILDCIRCUIT_HPP
#define BUILDCIRCUIT_HPP

#include "LogicGate.hpp"
#include "Wire.hpp"
#include <vector>
#include <string>
#include <unordered_map>

class BuildCircuit
{
    protected:
        std::unordered_map<std::string, LogicGate*> gates;
        std::unordered_map<std::string, Wire*> wires;

    public:
        ~BuildCircuit();

        void addGate(const std::string& type, const std::string& name);
        void addWire(const std::string& wireName, eLogicLevel level);
        void connect(const std::string& sourceName, const std::string& targetName, int inputIndex);
        eLogicLevel getOutput(const std::string& gateName);

        void setInput(const std::string& wireName, eLogicLevel level);

        LogicGate* getGate(const std::string& name);
        Wire* getWire(const std::string& name);
};

#endif // BUILDCIRCUIT_HPP
#include "BuildCircuit.hpp"
#include "AndGate.hpp"
#include "OrGate.hpp"
#include "NotGate.hpp"
#include "XorGate.hpp"
#include <iostream>

BuildCircuit::~BuildCircuit()
{
    for (auto& pair : gates)
    {
        delete pair.second;
    }
    for (auto& pair : wires)
    {
        delete pair.second;
    }
}

void BuildCircuit::addGate(const std::string& type, const std::string& name)
{
    if (type == "and")
    {
        gates[name] = new AndGate(name);
    }
    else if (type == "or")
    {
        gates[name] = new OrGate(name);
    }
    else if (type == "not")
    {
        gates[name] = new NotGate(name);
    }
    else if (type == "xor")
    {
        gates[name] = new XorGate(name);
    }
    else
    {
        std::cerr << "Unknown gate type: " << type << std::endl;
    }
}

void BuildCircuit::addWire(const std::string& wireName, eLogicLevel level)
{
    wires[wireName] = new Wire(wireName, level);
}

void BuildCircuit::connect(const std::string& sourceName, const std::string& targetName, int inputIndex)
{
    if (gates.find(sourceName) != gates.end())
    {
        eLogicLevel sourceOutput = gates[sourceName]->getOutput();
        if (gates.find(targetName) != gates.end())
        {
            gates[targetName]->setInput(inputIndex, sourceOutput);
        }
        else if (wires.find(targetName) != wires.end())
        {
            wires[targetName]->setLevel(sourceOutput);
        }
    }
    else if (wires.find(sourceName) != wires.end())
    {
        eLogicLevel wireLevel = wires[sourceName]->getLevel();
        if (gates.find(targetName) != gates.end())
        {
            gates[targetName]->setInput(inputIndex, wireLevel);
        }
    }
}

eLogicLevel BuildCircuit::getOutput(const std::string& gateName)
{
    if (gates.find(gateName) != gates.end())
    {
        gates[gateName]->ComputeOutput();
        return gates[gateName]->getOutput();
    }
    return eLogicLevel::LOW;
}

void BuildCircuit::setInput(const std::string& wireName, eLogicLevel level)
{
    if (wires.find(wireName) != wires.end())
    {
        wires[wireName]->setLevel(level);
    }
}

LogicGate* BuildCircuit::getGate(const std::string& name)
{
    return gates.find(name) != gates.end() ? gates[name] : nullptr;
}

Wire* BuildCircuit::getWire(const std::string& name)
{
    return wires.find(name) != wires.end() ? wires[name] : nullptr;
}

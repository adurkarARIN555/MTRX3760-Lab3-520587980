#ifndef BUILDCIRCUIT_HPP
#define BUILDCIRCUIT_HPP

#include "LogicGate.hpp"
#include "Wire.hpp"
#include <vector>
#include <string>
#include <unordered_map>

// Class responsible for building and managing the circuit based on input commands.
class BuildCircuit
{
    protected:
        std::unordered_map<std::string, LogicGate*> gates;      // Unordered map storing gate by its name
        std::unordered_map<std::string, Wire*> wires;           // Unordered map storing wire by its name

    public:
        ~BuildCircuit();

        // Function to adds a gate to the circuit with a specified type and name
        void addGate(const std::string& type, const std::string& name);

        // Function to adds a wire to the circuit
        void addWire(const std::string& wireName, eLogicLevel level);

        // Function to connect a wire to a gate's input or output
        void connect(const std::string& sourceName, const std::string& targetName, int inputIndex);

        eLogicLevel getOutput(const std::string& gateName);

        // Setting an input wire to a specific logic level
        void setInput(const std::string& wireName, eLogicLevel level);

        LogicGate* getGate(const std::string& name);
        Wire* getWire(const std::string& name);
};

#endif // BUILDCIRCUIT_HPP
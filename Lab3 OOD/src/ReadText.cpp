#include "ReadText.hpp"
#include <iostream>

void ReadText::readCircuitDescription(BuildCircuit& circuit)
{
    // Infinte-loop to keep reading the contents of the text file.
    // Reads the file line by line.
    while (true)
    {
        std::string request;
        std::cin >> request;  // get the next word from the input stream
        std::cout << "Processing input token: " << request << std::endl;

        if (request[0] == '#')
        {
            // a comment line
            // get the rest of the line and ignore it
            std::string dummyVar;
            getline(std::cin, dummyVar);
        }
        else if (request.compare("component") == 0)
        {
            std::string gateType;
            std::string gateName;
            std::cin >> gateType;
            std::cin >> gateName;
            std::cout << "Adding gate of type " << gateType << " named " << gateName << std::endl;
            circuit.addGate(gateType, gateName);
        }
        else if (request.compare("wire") == 0)
        {
            std::string wireName;
            std::cin >> wireName;
            circuit.addWire(wireName, eLogicLevel::LOW);
        }
        else if (request.compare("connect") == 0)
        {
            std::string sourceName, targetName;
            int inputIndex;
            std::cin >> sourceName >> targetName >> inputIndex;
            circuit.connect(sourceName, targetName, inputIndex);
        }
        else if (request.compare("testerOutput") == 0)
        {
            std::string gateName;
            int outputIndex;
            std::cin >> gateName >> outputIndex;
            eLogicLevel output = circuit.getOutput(gateName);
            std::cout << "Output from " << gateName << " is " << static_cast<int>(output) << std::endl;
        }
        else if (request.compare("testerInput") == 0)
        {
            std::string wireName;
            std::cin >> wireName;
            circuit.setInput(wireName, eLogicLevel::LOW);  // For simplicity, we set it to LOW by default.
        }
        else if (request.compare("end") == 0)
        {
            break; // end of file
        }
        else
        {
            std::cout << "Unrecognized command " << request << std::endl;
            std::cout << "Continuing to next line" << std::endl;
            std::string dummyVar;
            getline(std::cin, dummyVar);
        }
    }
}

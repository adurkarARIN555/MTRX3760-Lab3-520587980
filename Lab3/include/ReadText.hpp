#ifndef READTEXT_HPP
#define READTEXT_HPP

#include "BuildCircuit.hpp"
#include <string>

// Class responsible for reading the circuit description from a text file
// and building the circuit based on the given description in the file.
class ReadText
{
    public:
        // "static" function to read the circuit description from the ".txt" file
        static void readCircuitDescription(BuildCircuit& circuit);
};

#endif // READTEXT_HPP
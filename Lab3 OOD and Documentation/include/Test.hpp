#ifndef TEST_HPP
#define TEST_HPP

#include "BuildCircuit.hpp"

// Test class intended to run tests for different inputs fed to the gates.
class Test
{
    public:
        // "static" function to run tests for a set of various inputs passed to the sub-circuits created
        // from the description in the text file.
        static void runTests(BuildCircuit& circuit);
};

#endif // TEST_HPP
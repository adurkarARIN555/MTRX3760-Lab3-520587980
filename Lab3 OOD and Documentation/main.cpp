#include "BuildCircuit.hpp"
#include "ReadText.hpp"
#include "Test.hpp"

int main() {
    // Object of BildCircuit class created.
    BuildCircuit circuit;

    // Reading circuit description from text file.
    ReadText::readCircuitDescription(circuit);

    // Running tests of the sub-circuit with different inputs.
    Test::runTests(circuit);

    return 0;
}

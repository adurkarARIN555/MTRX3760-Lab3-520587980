#include "BuildCircuit.hpp"
#include "ReadText.hpp"
#include "Test.hpp"

int main() {
    BuildCircuit circuit;

    ReadText::readCircuitDescription(circuit);
    Test::runTests(circuit);

    return 0;
}

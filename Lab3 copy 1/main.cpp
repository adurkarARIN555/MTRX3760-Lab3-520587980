#include "BuildCircuit.h"
#include "ReadText.h"
#include "Test.h"

int main() {
    BuildCircuit circuit;

    ReadText::readCircuitDescription(circuit);
    Test::runTests(circuit);

    return 0;
}

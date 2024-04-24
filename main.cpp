#include "bankerAlg.hpp"
#include <iostream>

int main() {
    BankersAlgorithm ba("data.txt");
    ba.calculateSafeSequence();
    return 0;
}

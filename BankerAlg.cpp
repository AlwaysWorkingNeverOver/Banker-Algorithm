#include "bankerAlg.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

BankersAlgorithm::BankersAlgorithm(const std::string& filePath) {
    readDataFromFile(filePath);
}

void BankersAlgorithm::readDataFromFile(const std::string& filePath) {
    std::ifstream file(filePath);
    std::string line;
    if (!file) {
        std::cerr << "Cannot open input file!" << std::endl;
        exit(1);
    }

    // Read Available Resources
    std::getline(file, line);  // Skip the comment line
    std::getline(file, line);
    std::istringstream iss(line);
    int res;
    while (iss >> res) {
        available.push_back(res);
    }

    // Skip to Allocation Matrix
    std::getline(file, line);  // Skip the comment line
    for (int i = 0; i < numProcesses; i++) {
        std::getline(file, line);
        std::istringstream iss(line);
        std::vector<int> row;
        while (iss >> res) {
            row.push_back(res);
        }
        allocation.push_back(row);
    }

    // Skip to Maximum Matrix
    std::getline(file, line);  // Skip the comment line
    for (int i = 0; i < numProcesses; i++) {
        std::getline(file, line);
        std::istringstream iss(line);
        std::vector<int> row;
        while (iss >> res) {
            row.push_back(res);
        }
        maximum.push_back(row);
    }
}

void BankersAlgorithm::calculateSafeSequence() {
    if (isSafe()) {
        std::vector<int> sequence = findSafeSequence();
        std::cout << "System is in a safe state.\nSafe sequence is: ";
        for (int i : sequence) {
            std::cout << "P" << i;
            if(i < sequence.size() -1){
                std::cout << "-->";
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "No safe sequence found. System is not in a safe state." << std::endl;
    }
}

bool BankersAlgorithm::isSafe() {
    // Implementation of isSafe logic
    return true; // Placeholder
}

std::vector<int> BankersAlgorithm::findSafeSequence() {
    // Implementation to find safe sequence
    return std::vector<int>{0, 1, 2, 3, 4}; // Placeholder
}

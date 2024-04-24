#ifndef BANKERS_ALGORITHM_HPP
#define BANKERS_ALGORITHM_HPP

#include <vector>
#include <string>

class BankersAlgorithm {
public:
    BankersAlgorithm(const std::string& filePath);
    void calculateSafeSequence();
private:
    int numProcesses = 5;
    int numResources = 3;
    std::vector<int> available;
    std::vector<std::vector<int>> allocation;
    std::vector<std::vector<int>> maximum;

    bool isSafe();
    std::vector<int> findSafeSequence();
    void readDataFromFile(const std::string& filePath);
};

#endif // BANKERS_ALGORITHM_HPP

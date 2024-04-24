# Banker's Algorithm

This program implements the Banker's Algorithm, which is a system remains in a safe state when allocating resources to multiple processes. The Banker's Algorithm determines the safe sequence of processes that can be allowed to proceed given their maximum resource needs and the current state of resource allocation. The goal of this simulation is to test if the system can allow all processes to complete without entering a deadlock state.

# Input

The program uses a txt file called data.txt to collect input to give the appropiate output. 

#To run

use 
g++ -o (name of exexution) main.cpp bankerAlg.cpp
then use
./(name of execution)

this will result in the program compiling

#Output
Output will tell you if the system is in a safe space which means where each process can request and obtain the maximum demand of resources it might need without causing a deadlock or not safe which means if processes proceed to request maximum resources as per their maximum demand matrix, there could be a situation where processes end up waiting indefinitely for resources held by other processes, leading to a deadlock

##An example of compiling the banker's algorithm: 
![image](https://github.com/AlwaysWorkingNeverOver/Banker-Algorithm/assets/115910495/2478441c-33b2-4eb4-b198-72d0c943d19b)

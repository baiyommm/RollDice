#include <iostream>
#include <cstdlib> // for the "random" function
#include <ctime> // for the time function

using namespace std;

int main () {
    
    // Code needed to initialize a random number
    srand(static_cast<unsigned>(time(0)));
    
    // Initializing the min/max values of the Dice
    int minValue = 1;
    int maxValue = 6;
    
    // Rolls two dice using the given formula of the assignment
    // Stores the results of random number inside dice1 and dice2
    int dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

    // Prints the result
    cout << "You rolled a " << dice1 << " and a " << dice2 << "." << endl;

    return 0;
}

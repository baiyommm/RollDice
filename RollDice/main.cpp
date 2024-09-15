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
    
    
    
    return 0;
}

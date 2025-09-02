// COMSC-210 | Lab 4A | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Constants

// Color struct
struct Color
{
    int red;      // Red hue value
    int blue;     // Blue hue value
    int green;    // Green hue value
};

// Function prototypes

// Main function
int main()
{
    // Create a vector that holds Color struct objects
    vector<Color> v;

    // Generate a random number between 25 and 50
    srand(time(0));
    int n = rand() % 26 + 25;

    // Iterate and add the Color struct objects into the vector
    for (int i = 0; i < n; i++)
    {
        
    }

    return 0;
}

// Function implementations
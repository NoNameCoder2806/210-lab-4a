// COMSC-210 | Lab 4A | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// Color struct
struct Color
{
    int red;      // Red hue value
    int blue;     // Blue hue value
    int green;    // Green hue value
};

// Main function
int main()
{
    // Create a vector that holds Color struct objects
    vector<Color> v;

    // Call srand() to generate a seed based on the current time
    srand(time(0));

    // Generate a random number between 25 and 50
    int n = rand() % 26 + 25;

    // Iterate and add the Color struct objects into the vector
    for (int i = 0; i < n; i++)
    {
        // Create a Color struct object
        Color c;

        // Create 3 random integers for the hue values
        c.red = rand() % 256;      // Red
        c.blue = rand() % 256;     // Blue
        c.green = rand() % 256;    // Green

        // Push the Color struct object into the vector
        v.push_back(c);
    }

    // Display a header
    cout << "Color#   R Value   B Value   G Value" << endl;
    cout << "------   -------   -------   -------" << endl;

    // Display all the Color struct objects
    for (int i = 0; i < v.size(); i++)
    {
        // Display the digit
        cout << right << setw(4) << i + 1 << "     ";

        // Display the red, blue, and green hue values
        cout << right << setw(5) << v.at(i).red << "     ";
        cout << right << setw(5) << v.at(i).blue << "     ";
        cout << right << setw(5) << v.at(i).green << "     ";

        // Enter a new line
        cout << endl;
    }

    return 0;
}
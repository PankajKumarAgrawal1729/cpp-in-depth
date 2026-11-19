/*
 * Exercise: Loops/task1.cpp
 * Demonstrates a while loop by serving tea until the requested number of cups
 * has been reached.
 */

#include <iostream>

using namespace std;

int main()
{
    int numberOfCups;
    cout << "Enter the number of cups: ";
    cin >> numberOfCups;

    while (numberOfCups > 0)
    {
        cout << "Here is your cup of tea." << endl;
        numberOfCups--;
    }
    return 0;
}
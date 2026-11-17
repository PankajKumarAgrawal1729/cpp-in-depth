/*
 * Exercise: Conditionals/task2.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>
using namespace std;

int main()
{
    int hour;
    cout << "Enter the hour (0-23): ";
    cin >> hour;

    if (hour >= 8 && hour <= 18)
    {
        cout << "Tea shop is open." << endl;
    }
    else
    {
        cout << "Tea shop is closed." << endl;
    }
    return 0;
}
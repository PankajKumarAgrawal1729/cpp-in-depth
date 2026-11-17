/*
 * Exercise: Conditionals/task3.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    int numberOfCups;
    cout << "Enter the number of cups: ";
    cin >> numberOfCups;

    if (numberOfCups >= 10 && numberOfCups <= 20)
    {
        cout << "You have ordered " << numberOfCups << " cups. and you are eligible for a 10% discount." << endl;
    }
    else if (numberOfCups > 20)
    {
        cout << "You have ordered " << numberOfCups << " cups. and you are eligible for a 20% discount." << endl;
    }
    else
    {
        cout << "You have ordered " << numberOfCups << " cups. and you are not eligible for any discount." << endl;
    }
    return 0;
}
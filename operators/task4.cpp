/*
 * Exercise: operators/task4.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    bool isStudent;
    int numberOfCups;

    cout << "Are you a Student?" << endl;
    cin >> isStudent;

    cout << "How many tea cups do you wants?" << endl;
    cin >> numberOfCups;

    if (isStudent || numberOfCups > 15)
    {
        cout << "You are eligible for Discount" << endl;
    }
    else
    {
        cout << "Sorry!! You are not eligible for Discount" << endl;
    }

    cout << "Student Status: " << isStudent << endl;
    cout << "Number Of Cups: " << numberOfCups << endl;

    return 0;
}
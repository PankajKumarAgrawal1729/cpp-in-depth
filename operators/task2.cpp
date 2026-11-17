/*
 * Exercise: operators/task2.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaBags;

    cout << "How many tea bags you wants?" << endl;
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 10)
    {
        numberOfTeaBags += 5;
    }

    cout << "Final Number of Tea Bags: " << numberOfTeaBags << endl;
    return 0;
}
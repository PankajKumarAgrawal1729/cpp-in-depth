/*
 * Exercise: operators/Challenges/challenge2.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaBags;

    cout << "Enter Number of Tea Bags You wants?" << endl;
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 20)
    {
        numberOfTeaBags += 10;
    }

    cout << "Your Final Total Number of Tea Bags: " << numberOfTeaBags << endl;
    return 0;
}
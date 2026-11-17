/*
 * Exercise: operators/Challenges/challenge3.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaCups;
    float memberFrom;

    cout << "Enter Number of Tea Bags You wants?" << endl;
    cin >> numberOfTeaCups;

    cout << "From how many years you are members" << endl;
    cin >> memberFrom;

    if (numberOfTeaCups > 12 || memberFrom > 1)
    {
        cout << "You are eligible for Discount" << endl;
    }
    else
    {
        cout << "You are not eligible for Discount" << endl;
    }

    return 0;
}
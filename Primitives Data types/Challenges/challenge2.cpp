/*
 * Exercise: Primitives Data types/Challenges/challenge2.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    float teaPrice;

    cout << "Enter the tea price: " << endl;

    cin >> teaPrice;

    teaPrice += (teaPrice / 10);

    cout << "Tea Price1: " << (int)teaPrice << endl;

    return 0;
}
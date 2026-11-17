/*
 * Exercise: Primitives Data types/casting.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice; // explicit type cast
    int teaQuantity = 2;

    double totalPrice = teaPrice * teaQuantity;

    cout << totalPrice;

    return 0;
}
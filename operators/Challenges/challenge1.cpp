/*
 * Exercise: operators/Challenges/challenge1.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std; 

int main() {
    int numberOfCups;
    double pricePerCups;

    cout << "Enter Number of Tea Cups You wants?" << endl;
    cin >> numberOfCups;
    cout << "Enter Price per cup" << endl;
    cin >> pricePerCups;

    double totalPrice = numberOfCups * pricePerCups;
    cout << "Final Price before Tax: " << totalPrice << endl;

    double totalPriceAfterTax = totalPrice + (totalPrice * 0.1);
    cout << "Final Price After Tax: " << totalPriceAfterTax << endl;
    return 0;
}
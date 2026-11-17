/*
 * Exercise: Primitives Data types/userinput.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    cout << "how many cups of " << userTea << " would you like to have? ";
    cin >> teaQuantity;

    cout << userTea << ": " << teaQuantity << endl;

    return 0;
}
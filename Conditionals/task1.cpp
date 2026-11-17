/*
 * Exercise: Conditionals/task1.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userType;

    cout << "Enter your order: ";

    getline(cin, userType);
    
    if (userType == "Green Tea")
    {
        cout << "Order Confirmed" << endl;
    }
    return 0;
}
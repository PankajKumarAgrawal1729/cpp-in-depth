/*
 * Exercise: Conditionals/task4.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>

using namespace std;

int main()
{
    int teaType;
    cout << "Enter the type of tea (1. Oolong, 2. Black, 3. Green): " << endl;
    cout << "Enter your choice in number: ";
    cin >> teaType;

    switch (teaType)
    {
    case 1:
        cout << "You have selected Oolong tea: $4." << endl;
        break;
    case 2:
        cout << "You have selected Black tea: $3." << endl;
        break;
    case 3:
        cout << "You have selected Green tea: $2." << endl;
        break;
    default:
        cout << "Invalid tea type selected." << endl;
        break;
    }
    return 0;
}
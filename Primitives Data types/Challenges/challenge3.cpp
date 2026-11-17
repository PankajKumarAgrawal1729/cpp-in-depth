/*
 * Exercise: Primitives Data types/Challenges/challenge3.cpp
 * This C++ source file is part of the practice exercises for learning
 * core programming concepts such as variables, operators, conditionals,
 * and basic input/output.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea;
    int numberOfCups;

    cout << "What would you like o order in tea? " << endl;
    getline(cin, favoriteTea);

    cout << "How many cups you wants? " << endl;
    cin >> numberOfCups;

    cout << "Here is your " << numberOfCups << " cups of " << favoriteTea << " tea." << endl;
    return 0;
}


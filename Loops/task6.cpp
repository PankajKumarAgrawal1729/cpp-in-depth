/*
 * Exercise: Loops/task6.cpp
 * Demonstrates nested loops by brewing three cups of each type of tea.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 5; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "Brewing cup of " << teaTypes[i] << endl;
        }
        cout << "Finished brewing 3 cups of " << teaTypes[i] << endl;
    }
}
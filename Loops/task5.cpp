/*
 * Exercise: Loops/task5.cpp
 * Demonstrates the continue statement by skipping Green Tea while brewing
 * the remaining tea types.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaTypes[5] = {"Oolong tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"};
    for(int i = 0; i < 5; i++) {
        if(teaTypes[i] == "Green Tea") {
            continue; // Skip brewing Green Tea
        } 
        cout << "Brewing cup of " << teaTypes[i] << endl;
    }
    return 0;
}
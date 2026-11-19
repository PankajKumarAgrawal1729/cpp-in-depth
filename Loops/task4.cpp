/*
 * Exercise: Loops/task4.cpp
 * Demonstrates the break statement by stopping tea service when the user
 * enters "stop".
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userResponse;

    while (true) {
        cout << "Here is your cup of tea." << endl;
        cout << "Do you want another cup of tea? (stop to quit): ";
        cin >> userResponse;

        if (userResponse == "stop") {
            break;
        }
    }
    return 0;
}
/*
 * Exercise: Loops/task2.cpp
 * Demonstrates a do-while loop by continuing to offer tea until the user
 * enters "no".
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userResponse;

    do
    {
        cout << "Here is your cup of tea." << endl;
        cout << "Do you want another cup of tea? (yes/no): ";
        cin >> userResponse;
    } while (userResponse != "no");

    return 0;
}
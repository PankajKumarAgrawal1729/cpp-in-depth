/*
 * Exercise: Loops/task3.cpp
 * Demonstrates a for loop by printing the brewing instructions for five cups
 * of tea.
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Tea Brewing instructions." << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Brewing" << i + 1 << ": cup of tea." << endl;
        cout << "Step1 " << ": Add water to the kettle." << endl;
        cout << "Step2 " << ": Boil the water." << endl;
        cout << "Step3 " << ": Pour the water into the cup." << endl;
        cout << "Step4 " << ": Add tea leaves or a tea bag." << endl;
        cout << "Step5 " << ": Let it steep for a few minutes." << endl;
        cout << "Step6 " << ": Remove the tea leaves or tea bag." << endl;
        cout << "Step7 " << ": Enjoy your cup of tea!" << endl;
    }
    return 0;
}
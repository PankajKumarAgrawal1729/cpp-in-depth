#include <iostream>

using namespace std;

int main()
{
    int numberOfCups;
    double price;

    double totalAmt;

    cout << "How many cups do you wants?" << endl;
    cin >> numberOfCups;

    cout << "Enter Price per cups:" << endl;
    cin >> price;

    totalAmt = numberOfCups * price;

    cout << "Your total for " << numberOfCups << " cups of tea is : " << totalAmt << endl;

    if (totalAmt >= 100)
    {
        totalAmt -= (totalAmt / 20.0);
        cout << "Congrate!! You are eligible for 5\% Discount\nFinal Amount is: " << totalAmt << endl;
    }

    return 0;
}
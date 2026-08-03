#include <iostream>

using namespace std; 

int main() {
    int numberOfCups;
    double pricePerCups;

    cout << "Enter Number of Tea Cups You wants?" << endl;
    cin >> numberOfCups;
    cout << "Enter Price per cup" << endl;
    cin >> pricePerCups;

    double totalPrice = numberOfCups * pricePerCups;
    cout << "Final Price before Tax: " << totalPrice << endl;

    double totalPriceAfterTax = totalPrice + (totalPrice * 0.1);
    cout << "Final Price After Tax: " << totalPriceAfterTax << endl;
    return 0;
}
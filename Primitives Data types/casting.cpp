#include <iostream>

using namespace std;

int main()
{
    float teaPrice = 49.99;
    int roundedTeaPrice = (int)teaPrice; // explicit type cast
    int teaQuantity = 2;

    double totalPrice = teaPrice * teaQuantity;

    cout << totalPrice;

    return 0;
}
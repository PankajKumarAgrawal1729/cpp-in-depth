#include <iostream>

using namespace std;

int main()
{
    float teaPrice;

    cout << "Enter the tea price: " << endl;

    cin >> teaPrice;

    teaPrice += (teaPrice / 10);

    cout << "Tea Price1: " << (int)teaPrice << endl;

    return 0;
}
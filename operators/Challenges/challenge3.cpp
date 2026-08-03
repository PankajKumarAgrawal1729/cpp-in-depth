#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaCups;
    float memberFrom;

    cout << "Enter Number of Tea Bags You wants?" << endl;
    cin >> numberOfTeaCups;

    cout << "From how many years you are members" << endl;
    cin >> memberFrom;

    if (numberOfTeaCups > 12 || memberFrom > 1)
    {
        cout << "You are eligible for Discount" << endl;
    }
    else
    {
        cout << "You are not eligible for Discount" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaBags;

    cout << "How many tea bags you wants?" << endl;
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 10)
    {
        numberOfTeaBags += 5;
    }

    cout << "Final Number of Tea Bags: " << numberOfTeaBags << endl;
    return 0;
}
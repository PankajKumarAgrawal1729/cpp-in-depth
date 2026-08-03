#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaBags;

    cout << "Enter Number of Tea Bags You wants?" << endl;
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 20)
    {
        numberOfTeaBags += 10;
    }

    cout << "Your Final Total Number of Tea Bags: " << numberOfTeaBags << endl;
    return 0;
}
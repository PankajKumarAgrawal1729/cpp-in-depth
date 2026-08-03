#include <iostream>

using namespace std;

int main()
{
    int numberOfTeaCups;

    cout << "How many cups do you wants?" << endl;
    cin >> numberOfTeaCups;

    if (numberOfTeaCups > 20)
    {
        cout << "Hurray!! You got \"Gold\" Badge" << endl;
    }
    else if (10 <= numberOfTeaCups && numberOfTeaCups <= 20)
    {
        cout << "Hurray!! You got \"Silver\" Badge" << endl;
    }
    cout << "Number of Tea Cups: " << numberOfTeaCups << endl;
    return 0;
}
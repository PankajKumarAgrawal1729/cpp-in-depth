#include <iostream>

using namespace std;

int main()
{
    int teaType;
    int currentStock = 7;

    cout << "Enter the Tea types as 1, 2 Or 4?" << endl;
    cin >> teaType;

    if (teaType == 1 || teaType == 2 || teaType == 4)
    {
        if (teaType == 1 && (teaType & currentStock) != 0)
        {
            cout << "Yes Tea Type: 'Green' available in Stock" << endl;
        }
        else if (teaType == 2 && (teaType & currentStock) != 0)
        {
            cout << "Yes Tea Type: 'Black' available in Stock" << endl;
        }
        else if (teaType == 4 && (teaType & currentStock) != 0)
        {
            cout << "Yes Tea Type: 'Oolang' available in Stock" << endl;
        }
        else
        {
            cout << "Tea Type not available in Stock" << endl;
        }
    }
    else
    {
        cout << "Enter valid type" << endl;
    }

    return 0;
}

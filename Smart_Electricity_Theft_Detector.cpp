
#include <iostream>
using namespace std;

int main()
{
    int previous, current, average;
    int consumption;

    cout << "Enter previous meter reading: ";
    cin >> previous;

    cout << "Enter current meter reading: ";
    cin >> current;

    cout << "Enter average monthly consumption: ";
    cin >> average;

    if (previous < 0 || current < 0 || average <= 0)
    {
        cout << "\nInvalid Input";
    }
    else if (current < previous)
    {
        cout << "\nINVALID READING";
    }
    else
    {
        consumption = current - previous;

        cout << "\nMonthly Consumption: " << consumption << " units";

        if (consumption * 100 > average * 150)
        {
            cout << "\nStatus: HIGHLY SUSPICIOUS";
        }
        else if (consumption * 100 > average * 120)
        {
            cout << "\nStatus: WARNING";
        }
        else
        {
            cout << "\nStatus: NORMAL";
        }
    }

    return 0;
}

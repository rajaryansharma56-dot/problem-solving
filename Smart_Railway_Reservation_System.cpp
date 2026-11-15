
#include <iostream>
using namespace std;

int main()
{
    int total, booked, age, required;
    int available, price, fare;

    cout << "Enter total seats: ";
    cin >> total;

    cout << "Enter already booked seats: ";
    cin >> booked;

    cout << "Enter passenger age: ";
    cin >> age;

    cout << "Enter seats required: ";
    cin >> required;

    if (total <= 0 || booked < 0 || booked > total || age < 0 || required <= 0)
    {
        cout << "\nInvalid Input";
    }
    else
    {
        available = total - booked;

        if (required > available)
        {
            cout << "\nBooking Failed!";
            cout << "\nAvailable Seats: " << available;
        }
        else
        {
            if (age < 5)
            {
                price = 0;
                cout << "\nPassenger Category: Child";
            }
            else if (age <= 17)
            {
                price = 100;
                cout << "\nPassenger Category: Teenager";
            }
            else if (age < 60)
            {
                price = 200;
                cout << "\nPassenger Category: Adult";
            }
            else
            {
                price = 150;
                cout << "\nPassenger Category: Senior Citizen";
            }

            fare = price * required;
            available = available - required;

            cout << "\n\n------ RAILWAY RESERVATION ------";
            cout << "\nBooking Status: SUCCESSFUL";
            cout << "\nSeats Booked: " << required;
            cout << "\nTicket Price: Rs. " << price;
            cout << "\nTotal Fare: Rs. " << fare;
            cout << "\nRemaining Seats: " << available;
        }
    }

    return 0;
}

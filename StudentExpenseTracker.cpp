
#include <iostream>
#include <string>
using namespace std;

int main() {

    string expenses[100];
    double amounts[100];

    int count = 0;
    int choice;
    double budget;

    cout << "===== STUDENT EXPENSE TRACKER =====\n";

    cout << "Enter your monthly budget: ";
    cin >> budget;

    do {

        cout << "\n1. Add Expense";
        cout << "\n2. View Expenses";
        cout << "\n3. Total Spending";
        cout << "\n4. Highest Expense";
        cout << "\n5. Average Spending";
        cout << "\n6. Check Budget";
        cout << "\n7. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {

            if (count >= 100) {
                cout << "Expense limit reached!\n";
                continue;
            }

            cout << "Enter expense name: ";
            cin >> expenses[count];

            cout << "Enter amount: ";
            cin >> amounts[count];

            if (amounts[count] <= 0) {
                cout << "Invalid amount!\n";
            }
            else {
                count++;
                cout << "Expense added successfully!\n";
            }
        }

        else if (choice == 2) {

            if (count == 0) {
                cout << "No expenses recorded.\n";
            }

            for (int i = 0; i < count; i++) {
                cout << expenses[i] << " : Rs. "
                     << amounts[i] << endl;
            }
        }

        else if (choice == 3) {

            double total = 0;

            for (int i = 0; i < count; i++) {
                total += amounts[i];
            }

            cout << "Total Spending: Rs. " << total << endl;
        }

        else if (choice == 4) {

            if (count == 0) {
                cout << "No expenses available.\n";
                continue;
            }

            int highest = 0;

            for (int i = 1; i < count; i++) {
                if (amounts[i] > amounts[highest]) {
                    highest = i;
                }
            }

            cout << "Highest Expense: "
                 << expenses[highest]
                 << " Rs. " << amounts[highest] << endl;
        }

        else if (choice == 5) {

            if (count == 0) {
                cout << "No expenses available.\n";
                continue;
            }

            double total = 0;

            for (int i = 0; i < count; i++) {
                total += amounts[i];
            }

            cout << "Average Spending: Rs. "
                 << total / count << endl;
        }

        else if (choice == 6) {

            double total = 0;

            for (int i = 0; i < count; i++) {
                total += amounts[i];
            }

            cout << "Remaining Budget: Rs. "
                 << budget - total << endl;

            if (total > budget) {
                cout << "WARNING: Budget exceeded!\n";
            }
            else {
                cout << "You are within your budget.\n";
            }
        }

        else if (choice == 7) {
            cout << "Thank you for using Expense Tracker!\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}

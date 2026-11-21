#include <iostream>
using namespace std;

int main() {
    int positive_num_count = 0;
    int negative_num_count = 0;
    int zero_num_count = 0;

    int sum_positive_num = 0;
    int largest_positive_num = 0;
    bool found_positive = false;

    for (int i = 1; i <= 10; i++) {
        int n;

        cout << "Enter number " << i << ": ";
        cin >> n;

        if (n > 0) {
            positive_num_count++;
            sum_positive_num += n;

            if (!found_positive || n > largest_positive_num) {
                largest_positive_num = n;
                found_positive = true;
            }
        }
        else if (n == 0) {
            zero_num_count++;
        }
        else {
            negative_num_count++;
        }
    }

    cout << "Positive numbers are: " << positive_num_count << endl;
    cout << "Negative numbers are: " << negative_num_count << endl;
    cout << "Zeros are: " << zero_num_count << endl;
    cout << "Sum of all positive numbers: " << sum_positive_num << endl;

    if (found_positive)
        cout << "Largest positive number: " << largest_positive_num << endl;
    else
        cout << "No positive number was entered." << endl;

    cout << "\n====== THANK YOU ======";

    return 0;
}

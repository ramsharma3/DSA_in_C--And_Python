#include <iostream>
#include <string>

using namespace std;

string getDayOfWeek(int day, int month, int year) {
    // Zeller's Congruence algorithm
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int K = year % 100;
    int J = year / 100;

    int dayOfWeek = (day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;

    // Map the result to the corresponding day
    string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return days[dayOfWeek];
}

int main() {
    // Input date from the user
    string dateInput;
    cout << "Enter the date in the format DD/MM/YYYY: ";
    cin >> dateInput;

    // Extract day, month, and year
    int day, month, year;
    sscanf(dateInput.c_str(), "%d/%d/%d", &day, &month, &year);

    // Get the day of the week
    string dayOfWeek = getDayOfWeek(day, month, year);

    // Output the result
    cout << "The day of the week on " << dateInput << " is " << dayOfWeek << "." << endl;

    return 0;
}

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Task 3:
    Read two integer numbers from the console.
    Swap their values without using a third variable.
    Print them on the console.
*/

int main()
{
    // there are 60 seconds in a minute
    const int SECONDS_IN_A_MINUTE = 60;
    // there are 60 minutes in an hour
    const int SECONDS_IN_AN_HOUR = SECONDS_IN_A_MINUTE * 60;
    // there are 24 hours in a day
    const int SECONDS_IN_A_DAY = SECONDS_IN_AN_HOUR * 24;

    int seconds;
    cout << "Seconds: ";
    cin >> seconds;

    int days = seconds / SECONDS_IN_A_DAY;
    // remove the seconds forming whole days
    seconds -= days * SECONDS_IN_A_DAY;

    int hours = seconds / SECONDS_IN_AN_HOUR;
    // remove the seconds forming whole hours
    seconds -= hours * SECONDS_IN_AN_HOUR;

    int minutes = seconds / SECONDS_IN_A_MINUTE;
    // remove the seconds forming whole minutes
    seconds -= minutes * SECONDS_IN_A_MINUTE;

    cout << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds" << endl;
    return 0;
}
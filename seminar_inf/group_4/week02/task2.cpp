#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Enter number of days for the holiday: \n";
    unsigned int n;
    cin >> n;
    int month = 1;

    int dateBackToSchool = 22 + n;
    if (n >= 2 && n <= 22)
    {
        if (dateBackToSchool > 31)
        {
            dateBackToSchool = dateBackToSchool - 31;
            month++;
        }

    cout << "The students must be back at school on " << dateBackToSchool <<
            ".0" << month << ".2022" << endl;
    }
    else
    {
        cout << "No holiday!!!" << endl;
    }

    return 0;
}

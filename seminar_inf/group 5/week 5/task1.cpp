#include <iostream>
using namespace std;

// Решение с int
int main()
{
    long long EGN;
    cout << "Enter your EGN: ";
    cin >> EGN;
    int genderDigit = (EGN / 10) % 10;
    int year = EGN / 100000000;
    int month = (EGN / 1000000) % 100;
    int days = (EGN / 10000) % 100;
    
    //Това не е напълно вярно защото допуска 31 февруари като валидна дата, но е досатъчно близко до истината за този пример
    bool daysAreValid = days >= 1 && days <= 31;
    bool monthIsValid = (month >= 1 && month <= 12) || (month >=21 && month <=32) || (month >= 41 || month < 52);

    if (!daysAreValid || !monthIsValid)
    {
        cout << "Invalid EGN";
    }
    else
    {
        bool isMale = (genderDigit % 2) == 0;
        cout << "The person's gender is " << (isMale ? "Male" : "Female") << endl;
        
        

        //if (month >= 1 && month <= 12)
        //{
        //    cout << "19";
        //}
        //else if (month >= 21 && month <= 32)
        //{
        //    cout << "18";
        //    month -= 20;
        //}
        //else
        //{
        //    cout << "20";
        //    month -= 40;
        //}
        //if (year >= 0 && year <= 9)
        //{
        //    cout << '0';
        //}
        //cout << year << "." << month << "." << days;


        /// Алтернативно решение
        if (month >= 1 && month <= 12)
        {
            year += 1900;
        }
        else if (month >= 21 && month <= 32)
        {
            year += 1800;
            month -= 20;
        }
        else
        {
            year += 2000;
            month -= 40;
        }
        cout << year << "." << month << "." << days;

    }
}



//// Решение с char
//int main()
//{
//    // Тук може да пишете валидации дали всичките чарове ще получат числа, дали егнто е 10 символа, и т.н.
//    cout << "Enter your EGN: ";
//    char firstYearDigit, secondYearDigit, firstMonthDigit, secondMonthDigit, firstDayDigit, secondDayDigit, genderChar;
//    cin >> firstYearDigit >> secondYearDigit >> firstMonthDigit >> secondMonthDigit >> firstDayDigit >> secondDayDigit;
//    //Тази функция прескача следващите 2 символа от входа на конзолата(това влючва и празни места и нови редове ' ', '\n')
//    //може да видите повече за нея ако потърсите std::istream::ignore
//    cin.ignore(2);
//    cin >> genderChar;
//
//    int genderDigit = genderChar - '0'; // преобразуваме символа за число в съответното число. пример: '2' = 50, '0' = 48, така че '2' - '0' = 2
//    bool isMale = (genderDigit % 2) == 0;
//
//    int year = 0, month = 0, day = 0;
//
//    switch (firstMonthDigit)
//    {
//    case '0':
//        year += 1900;
//        month += secondMonthDigit - '0';
//        break;
//    case '1':
//        year += 1900;
//        month += 10;
//        month += secondMonthDigit - '0';
//        break;
//    case '2':
//        year += 1800;
//        month += secondMonthDigit - '0';
//        break;
//    case '3':
//        year += 1800;
//        month += 10;
//        month += secondMonthDigit - '0';
//        break;
//    case '4':
//        year += 2000;
//        month += secondMonthDigit - '0';
//        break;
//    case '5':
//        year += 2000;
//        month += 10;
//        month += secondMonthDigit - '0';
//        break;
//    default:
//        // Това е ненужно защо после правим подобни проверки
//        cout << "The third digit of the EGN is invalid";
//        return 0; // спираме програмата
//        break;
//    }
//    year += (firstYearDigit - '0') * 10 + (secondYearDigit - '0');
//    day += (firstDayDigit - '0') * 10 + (secondDayDigit - '0');
//
//
//    bool yearIsValid = year >= 1800 && year <= 2099;
//    bool monthIsValid = month >= 1 && month <= 12;
//    bool dayIsValid = day >= 1 && day <= 31; // тук пак може да проверим за неща като февруари 31
//    // също така може да направим проверка дали трябва на изхода да изведаме дните или месеците като 01, 02, 03 и т.н.
//
//    if (yearIsValid && monthIsValid && dayIsValid)
//    {
//    cout << "The person's gender is " << (isMale ? "male and he was born in " : "female and she was born in ") << year << '.' << month << '.' << day;
//    }
//    else
//    {
//        cout << "The EGN is invalid, " << (yearIsValid ? "" : "the year is incorrect ") << (monthIsValid ? "" : "the month is incorrect ") << (dayIsValid ? "" : "the day is incorrect");
//    }
//}

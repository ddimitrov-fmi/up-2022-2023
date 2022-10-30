#include <iostream>

bool areDelimitersValid(char delimiter1, char delimiter2, char delimiter3, char delimiter4);

bool isYearLeap(unsigned int year);

bool isDateValid(unsigned int day, unsigned int month, unsigned int year);

bool isHourValid(unsigned int hours, unsigned int minutes, unsigned int seconds);

unsigned int getCountOfLeapYearsUntil(unsigned int year);

unsigned long long convertTimeToSeconds(unsigned int day, unsigned int month, unsigned int year,
                                    unsigned int hours, unsigned int minutes, unsigned int seconds);

void printResult(unsigned int days, unsigned int hours, unsigned int minutes, unsigned int seconds);

int main ()
{
    unsigned int day1, month1, year1, hours1, minutes1, seconds1;
    unsigned int day2, month2, year2, hours2, minutes2, seconds2;

    char delimiter1_1, delimiter1_2, delimiter1_3, delimiter1_4;
    char delimiter2_1, delimiter2_2, delimiter2_3, delimiter2_4;

    std::cin >> day1 >> delimiter1_1 >> month1 >> delimiter1_2 >> year1;
    std::cin >> hours1 >> delimiter1_3 >> minutes1 >> delimiter1_4 >> seconds1;
    std::cin >> day2 >> delimiter2_1 >> month2 >> delimiter2_2 >> year2;
    std::cin >> hours2 >> delimiter2_3 >> minutes2 >> delimiter2_4 >> seconds2;

    if (!areDelimitersValid(delimiter1_1, delimiter1_2, delimiter1_3, delimiter1_4) ||
        !areDelimitersValid(delimiter2_1, delimiter2_2, delimiter2_3, delimiter2_4) ||
        !isDateValid(day1, month1, year1) || !isDateValid(day2, month2, year2) ||
        !isHourValid(hours1, minutes1, seconds1) || !isHourValid(hours2, minutes2, seconds2)) 
    {
        std::cout << "Invalid date/time" << std::endl;
        return 1;
    }

    unsigned long long time1InSeconds = convertTimeToSeconds(day1, month1, year1, hours1, minutes1, seconds1);
    unsigned long long time2InSeconds = convertTimeToSeconds(day2, month2, year2, hours2, minutes2, seconds2);

    unsigned long long timeDifferenceInSeconds = (time1InSeconds > time2InSeconds) ?
                (time1InSeconds - time2InSeconds) : (time2InSeconds - time1InSeconds);

    unsigned int remainingSeconds;

    unsigned int daysDifference = timeDifferenceInSeconds / (24 * 60 * 60); // converting into days
    remainingSeconds = timeDifferenceInSeconds % (24 * 60 * 60); // remainder

    unsigned int hoursDifference = remainingSeconds / (60 * 60); // converting the remaining seconds into hours
    remainingSeconds %= (60 * 60); // remainder

    unsigned int minutesDifference = remainingSeconds / 60; // converting the remaining seconds into minutes
    remainingSeconds %= 60;

    unsigned int secondsDifference = remainingSeconds;

    printResult(daysDifference, hoursDifference, minutesDifference, secondsDifference);

    return 0;
}

bool areDelimitersValid(char delimiter1, char delimiter2, char delimiter3, char delimiter4) 
{
    return delimiter1 == '.' && delimiter2 == '.' && delimiter3 == ':' && delimiter4 == ':';
}

bool isYearLeap(unsigned int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

bool isDateValid(unsigned int day, unsigned int month, unsigned int year)
{
    unsigned maxDaysForCurrentMonth = 0;

    switch (month)
    {
    default:
        maxDaysForCurrentMonth += 1; // additional day for the months with 31 days
    case 4:
    case 6:
    case 9:
    case 11:
        maxDaysForCurrentMonth += 2; // the two extra days if the month is not February - it has least 30 days
    case 2:
        maxDaysForCurrentMonth += 28; // every month has 28 days
    }

    if (month == 2) // adding 1 extra day if the month is February and the year is leap
    {
        maxDaysForCurrentMonth += isYearLeap(year); // 0 if false, 1 if true
    }

    return year < 9999 && month != 0 && month <= 12 && day != 0 && day <= maxDaysForCurrentMonth;  
}

bool isHourValid(unsigned int hours, unsigned int minutes, unsigned int seconds)
{
    return hours < 24 && minutes < 60 && seconds < 60;
}

unsigned int getCountOfLeapYearsUntil(unsigned int year)
{
    if (year == 0) // there are no leap years before year 0
    {
        return 0;
    }

    --year; // reducing the years by 1 because we count the leap years before the given year
    return year / 4 - year / 100 + year / 400 + 1; // adding 1 because the year 0 also is a leap year
}

unsigned long long convertTimeToSeconds(unsigned int day, unsigned int month, unsigned int year,
                                    unsigned int hours, unsigned int minutes, unsigned int seconds)
{
    unsigned long long timeInDays = year * 365 + getCountOfLeapYearsUntil(year);

    timeInDays += day; // adding the days froom the current month

    switch (month) // adding the days from the previous months of the current year
    {
    case 12:
        timeInDays += 30; // adding the days from November
    case 11:
        timeInDays += 31; // adding the days from October
    case 10:
        timeInDays += 30; // adding the days from September
    case 9:
        timeInDays += 31; // adding the days from August
    case 8:
        timeInDays += 31; // adding the days from July
    case 7:
        timeInDays += 30; // adding the days from June
    case 6:
        timeInDays += 31; // adding the days from May
    case 5:
        timeInDays += 30; // adding the days from April
    case 4:
        timeInDays += 31; // adding the days from March
    case 3:
        timeInDays += (28 + isYearLeap(year)); // adding the days from Fabruary
    case 2:
        timeInDays += 31; // adding the days from January
    }

    unsigned long long timeInSeconds = timeInDays * 24 * 60 * 60; // converting the days into seconds (24 hours per day, 60 minutes per hour, 60 seconds per minute)
    timeInSeconds += (hours * 60 * 60 + minutes * 60 + seconds); // adding the seconds from the given hour by converting the hours and the minutes into seconds

    return timeInSeconds;
}

void printResult(unsigned int days, unsigned int hours, unsigned int minutes, unsigned int seconds)
{
    if (days != 0)
    {
        std::cout << days << "-";
    }

    std::cout << (hours < 10 ? "0" : "") << hours << ":";
    std::cout << (minutes < 10 ? "0" : "") << minutes << ":";
    std::cout << (seconds < 10 ? "0" : "") << seconds << std::endl;
}
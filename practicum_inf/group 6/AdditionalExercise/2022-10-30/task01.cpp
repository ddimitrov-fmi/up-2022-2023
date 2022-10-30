#include <iostream>

/*
Поп-фолк изпълнителката Преслава иска да планира в колко часа ще приключи нейното участие в Студентски град в зависимост от това колко песни ще изпълни. За съжаление, тя не е много добра по математика и се нуждае от вашата помощ - вие трябва да напишете програма, която изчислява това за нея. На първия ред въвеждате две числа - часът и минутите на началото на участието на Преслава. На втория ред въвеждате едно число - броят песни, които тя иска да изпълни. На екрана трябва да изведете в колко часа ще приключи участието на певицата.

Приемете, че продължителността на всяка една песен е 3 минути
*/

const unsigned int MINUTES_PER_SONG = 3;

int main ()
{
    unsigned int startPerformanceHours, startPerformanceMinutes;
    std::cin >> startPerformanceHours >> startPerformanceMinutes;

    unsigned int songsCount;
    std::cin >> songsCount;

    if (startPerformanceHours > 23 || startPerformanceMinutes > 59 || songsCount == 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    unsigned int allSongsDuration = songsCount * MINUTES_PER_SONG;

    unsigned int startPerformanceOnlyInMinutes = 
        startPerformanceHours * 60 + startPerformanceMinutes;

    unsigned int endPerformanceOnlyInMinutes = startPerformanceOnlyInMinutes + allSongsDuration;
        
    // 160 + 30 = 190 = 3:10

    unsigned int endPerformanceHours = endPerformanceOnlyInMinutes / 60;
    unsigned int endPerformanceMinutes = endPerformanceOnlyInMinutes % 60;

    std::cout << "Preslava's performance will end at ";
    std::cout << (endPerformanceHours < 10 ? "0" : "") << endPerformanceHours;
    std::cout << ":";
    std::cout << (endPerformanceMinutes < 10 ? "0" : "") << endPerformanceMinutes;
    std::cout << std::endl;

    return 0;
}
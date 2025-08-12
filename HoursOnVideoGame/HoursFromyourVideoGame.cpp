#include <iostream>

int gettingHoursFromUser()
{
    std::cout << "Enter the number of hours in your video game: ";
    int hours{};
    std::cin >> hours;

    return hours;
}

int convertHoursToYears(int hours)
{
    return hours / 8760; // 1 Year = 8760 Hours
}

int convertHoursToDays(int hours)
{
    return (hours % 8760) / 24; // 1 Day  = 24 Hours
}

int convertHoursToHours(int hours)
{
    return (hours % 8760) % 24; //Remaining hours after converting to days
}

int main()
{
    int hours {gettingHoursFromUser()};
    int years {convertHoursToYears(hours)};
    int days {convertHoursToDays(hours)};
    int remainingHours {convertHoursToHours(hours)};

    std::cout << hours << " Hours is about: " << years << " years, " << days  << " days, and " << remainingHours << " hours. Put into your game. Nice!\n";

    return 0;
}


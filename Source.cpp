#include <iostream>

int main()
{
    double speed;
    int hours;

    std::cout << "Enter the speed of the vehicle in miles per hour: ";
    std::cin >> speed;

    std::cout << "Enter the number of hours traveled: ";
    std::cin >> hours;

    if (speed < 0 || hours < 1)
    {
        std::cout << "Speed must be positive and hours must be at least 1.\n";
        return 1;
    }

    std::cout << "\nHour\tMiles Traveled\n";
    std::cout << "-------------------------\n";

    for (int hour = 1; hour <= hours; ++hour)
    {
        double distance = speed * hour;
        std::cout << hour << '\t' << distance << " miles\n";
    }

    return 0;
}
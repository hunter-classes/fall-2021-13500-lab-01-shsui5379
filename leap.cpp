/**
 * Author: Steven Hsui
 * Course: CSCI-135
 * Instructor: Michael Zamansky
 * Assignment: Lab 1 Part C
 * 
 * Asks the user for a year
 * and prints out whether that year is a leap year
 * */
#include <iostream>

int main()
{
    int year;

    std::cout << "Enter year: ";
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << "Leap year\n";
            }
            else
            {
                std::cout << "Common year\n";
            }
        }
        else
        {
            std::cout << "Leap year\n";
        }
    }
    else
    {
        std::cout << "Common year\n5";
    }

    return 0;
}
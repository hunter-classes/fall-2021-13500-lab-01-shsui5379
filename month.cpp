/**
 * Author: Steven Hsui
 * Course: CSCI-135
 * Instructor: Michael Zamansky
 * Assignment: Lab 1 Part D
 * 
 * Asks the user for a month and year
 * and prints out the number of days in that month
 * */
#include <iostream>

/**
 * @param year  The year to determine leap status for
 * @return  Whether year is as leap year
 * */
bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int year, month;

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter month: ";
    std::cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        std::cout << "31 days\n";
    }
    else if (month != 2)
    {
        std::cout << "30 days\n";
    }
    else if (isLeapYear(year))
    {
        std::cout << "29 days\n";
    }
    else
    {
        std::cout << "28 days\n";
    }

    return 0;
}

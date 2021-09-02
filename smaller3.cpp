/**
 * Author: Steven Hsui
 * Course: CSCI-135
 * Instructor: Michael Zamansky
 * Assignment: Lab 1 Part B
 * 
 * Asks the user for 3 integers via stdin
 * and prints out the smaller of the 3
 * */
#include <iostream>

int main()
{
    int first, second, third;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Ener the second number: ";
    std::cin >> second;

    std::cout << "Enter the third number: ";
    std::cin >> third;

    std::cout << "The smaller of the three is ";

    if (first < second && first < third)
    {
        std::cout << first << std::endl;
    }
    else if (second < first && second < third)
    {
        std::cout << second << std::endl;
    }
    else
    {
        std::cout << third << std::endl;
    }

    return 0;
}
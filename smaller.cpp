/**
 * Author: Steven Hsui
 * Course: CSCI-135
 * Instructor: Michael Zamansky
 * Assignment: Lab 1 Part A
 * 
 * Asks the user for 2 integers via stdin
 * and prints out the smaller of the 2
 * */
#include <iostream>

int main()
{
    int first, second;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Ener the second number: ";
    std::cin >> second;

    std::cout << "The smaller of the two is ";

    if (first < second)
    {
        std::cout << first << std::endl;
    }
    else
    {
        std::cout << second << std::endl;
    }

    return 0;
}
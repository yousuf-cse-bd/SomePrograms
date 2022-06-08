/**
 * @file NumberInCharacter.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to convert number in character
 * @version 0.1
 * @date 2022-05-31
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int nameDigit, reverseNumber = 0, number = 171311101;
    // Firstly manipulation reverse the number
    while (number != 0)
    {
        int digitWise = number % 10;
        reverseNumber = (reverseNumber * 10) + digitWise;
        number /= 10;
    }

    // Now main task: digit name assigned
    while (reverseNumber != 0)
    {
        /* code */
        nameDigit = reverseNumber % 10;
        switch (nameDigit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;

        default:
            cout << "Tut Tut..!" << endl;
            break;
        }
        reverseNumber /= 10;
    }
    cout<<"." << endl;
    return 0;
}

/**
 * @file Hexadecimal2Decimal.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief  WAP to convert number hexadecimal to decimal
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string hexadecimalValue = "abcdef";
    // cout<<"Hexadecimal NUmber: "<<hexadecimalValue<<endl;
    int power = hexadecimalValue.size();
    long long int decimal = 0; // sum all char pow(16, power)

    int i = 0;
    while (hexadecimalValue[i] != '\0')
    {
        int value;
        /* code */
        switch (hexadecimalValue[i])
        {
        case '1':
            value = 1;
            break;
        case '2':
            value = 2;
            break;
        case '3':
            value = 3;
            break;
        case '4':
            value = 4;
            break;
        case '5':
            value = 5;
            break;
        case '6':
            value = 6;
            break;
        case '7':
            value = 7;
            break;
        case '8':
            value = 8;
            break;
        case '9':
            value = 9;
            break;
        case 'a':
        case 'A':
            value = 10;
            break;
        case 'b':
        case 'B':
            value = 11;
            break;
        case 'c':
        case 'C':
            value = 12;
            break;
        case 'd':
        case 'D':
            value = 13;
            break;
        case 'e':
        case 'E':
            value = 14;
            break;
        case 'f':
        case 'F':
            value = 15;
           break;
        default:
            cout<<"Md. Yousuf Ali"<<endl;
            break;
        }
        decimal += value * pow(16, --power);
        i++;
    }

    // result print
    cout<<"Decimal Number: "<<decimal<<endl;
    cout<<"Hexadecimal NUmber: "<<hexadecimalValue<<endl;
    

    return 0;
}
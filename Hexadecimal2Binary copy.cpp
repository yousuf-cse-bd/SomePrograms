/**
 * @file Hexadecimal2Binary.cpp
 * @author Md. Yosusuf Ali (you@domain.com)
 * @brief WAP to convert Hexadecimal to Binary string 
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
// #include <algorithm>
#include <string>
using namespace std;


// Hexadecimal to Binary Simple
void hexaDecimal2Binary(string hexCode)
{
    int i = 0;
    while(hexCode[i] != '\0') // Loop start
    {
        /* code */
        switch (hexCode[i])
        {
        case '0':
            cout<<"0000";
            break;
        case '1':
            cout<<"0001";
            break;
        case '2':
            cout<<"0010";
            break;
        case '3':
            cout<<"0011";
            break;
        case '4':
            cout<<"0100";
            break;
        case '5':
            cout<<"0101";
            break;
        case '6':
            cout<<"0110";
            break;
        case '7':
            cout<<"0111";
            break;
        case '8':
            cout<<"1000";
            break;
        case '9':
            cout<<"1001";
            break;
        case 'A': // 10
            cout<<"1010";
            break;
        case 'a':
            cout<<"1010";
            break;
        case 'B': // 11
            cout<<"1011";
            break;
        case 'b': 
            cout<<"1011";
            break;
        case 'C': //12
            cout<<"1100";
            break;
        case 'c': 
            cout<<"1100";
            break;
        case 'D': //13
            cout<<"1101";
            break;
        case 'd':
            cout<<"1101";
            break;
        case 'E': //14
            cout<<"1110";
            break;
        case 'e':
            cout<<"1110";
            break;
        case 'F':
            cout<<"1111";
            break;
        case 'f':
            cout<<"1111";
            break;
        default:
            cout<<"Yousuf Muhammad Ali"<<endl;
            break;
        }
        i++;
    } // loop end
}

int main(int argc, char const *argv[])
{
    /* code */

    string hexaDecimal = "AbCdeF0123456789";
    hexaDecimal2Binary(hexaDecimal);
    
    return 0;
}

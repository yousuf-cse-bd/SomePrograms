/**
 * @file OctalToHexadecimalNumberJavaTpoint.cpp
 * @author Credit javaTpoint (you@domain.com)
 * @brief WAP to convert octal to hexadecimal
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <algorithm>
using namespace std;

/*Octal to Binary convertion*/
long long int octal2Binary(int octalNumber)
{
    /*Check Octal number?*/
    string theNumber = to_string(octalNumber);
    unsigned int i = 0;
    while(theNumber[i] != '\0')
    {
        if(theNumber[i] > '7')
        {
            cout<<"Your entered the number is not OCTAL based...!";
            exit(0);
        }
        ++i;
    } // end my logic

    /*Main task of convertion*/
    unsigned int octalToBinaryArray [] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int binaryNumber = 0;
    unsigned postionMaking = 1;

    while(octalNumber != 0)
    {
        unsigned int digitWise = octalNumber % 10;
        binaryNumber = octalToBinaryArray[digitWise] * postionMaking + binaryNumber;
        octalNumber /= 10;
        postionMaking = postionMaking*1000;
    }
    return binaryNumber;
}

int main(int argc, char const *argv[])
{
    /* code */
    int octalNumber = 123;
    cout<<"Enter Octal Number Here(MAX Digit: 4)?: ";
    cin>>octalNumber;
    long long int binaryNumber = octal2Binary(octalNumber);
    cout<<"Expected Binary Number: "<<binaryNumber<<endl;

    /*Now convertion frome binary to hexadecimal*/
    string hexaDecimalNumber = "";

    while(binaryNumber != 0)
    {
        // Remainder must binary digit
        unsigned int remainder = binaryNumber % 10000;
        switch (remainder)
        {
        case 0:
            hexaDecimalNumber = hexaDecimalNumber.append("0");
            break;
        case 1:
            hexaDecimalNumber = hexaDecimalNumber.append("1");
            break;
        case 10:
            hexaDecimalNumber = hexaDecimalNumber.append("2");
            break;
        case 11:
            hexaDecimalNumber = hexaDecimalNumber.append("3");
            break;
        case 100:
            hexaDecimalNumber = hexaDecimalNumber.append("4");
            break;
        case 101:
            hexaDecimalNumber = hexaDecimalNumber.append("5");
            break;
        case 110:
            hexaDecimalNumber = hexaDecimalNumber.append("6");
            break;
        case 111:
            hexaDecimalNumber = hexaDecimalNumber.append("7");
            break;
        case 1000:
            hexaDecimalNumber = hexaDecimalNumber.append("8");
            break;
        case 1001:
            hexaDecimalNumber = hexaDecimalNumber.append("9");
            break;
        case 1010:
            hexaDecimalNumber = hexaDecimalNumber.append("A");
            break;
        case 1011:
            hexaDecimalNumber = hexaDecimalNumber.append("B");
            break;
        case 1100:
            hexaDecimalNumber = hexaDecimalNumber.append("C");
            break;
        case 1101:
            hexaDecimalNumber = hexaDecimalNumber.append("D");
            break;
        case 1110:
            hexaDecimalNumber = hexaDecimalNumber.append("E");
            break;
        case 1111:
            hexaDecimalNumber = hexaDecimalNumber.append("F");
            break;
        default:
            cout<<"***Yousuf_Ali***"<<endl;
            break;
        }
        binaryNumber /= 10000;
    }

    reverse(hexaDecimalNumber.begin(), hexaDecimalNumber.end());
    cout<<"The Hexadecimal Number: "<<hexaDecimalNumber<<endl;
    return 0;
}

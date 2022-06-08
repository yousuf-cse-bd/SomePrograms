/*****************************************
 * @file OctalNumber2HexadcimalNumber.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to convert octal number to hexadecimal number
 * @version 0.1
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 /*Convert to octal to binary*/
long long int octal2Binary(int octalNumber)
{
    int decimalNumber, toThePower;
    long long int binaryNumber;
    decimalNumber = binaryNumber = toThePower = 0;
    /*Firstly convert octal to decimal*/
    while(octalNumber != 0)
    {
        // Discrete to digit-wise and sum of them
        decimalNumber += (octalNumber % 10) * pow(8, toThePower);
        ++toThePower;
        octalNumber /= 10;
    }
    // cout<<"Decimal Number: "<<decimalNumber<<endl;
    toThePower = 1;
    // Now decimal to binary
    while(decimalNumber != 0)
    {
        // Discrete to digit-wise and sum of them 
        binaryNumber += (decimalNumber % 2) * toThePower;// (accepted)* pow(10, toThePower++);
        toThePower *= 10; // just to reverse order
        decimalNumber /= 2;
    }
    // cout<<"Binary Number: "<<binaryNumber<<endl;
    return binaryNumber;
}

int main(int argc, char const *argv[])
{
    /* code */
    int octalNumber;
    cout<<"Enter The Octal Number Here: ";
    cin>>octalNumber;
    string checkOctal = to_string(octalNumber);
    // Check octal number || not
    // if not octal number thne exit(terminated)
    int i = 0;
    while(checkOctal[i] != '\0')
    {
        if(checkOctal[i] > '8')
        {
            cout<<"Your Given Number is not octal..!"<<endl;
            exit(0);
        }
        i++;
    }
    
    long long int binaryNumber;
    binaryNumber = octal2Binary(octalNumber);
    string hexaDecimal = "";
   
    cout<<"Binary Number: "<<binaryNumber<<endl; 
    /*Binary to Hexadecimal*/
    while(binaryNumber != 0)
    {
        // remainder will be binary number
        int remainder = binaryNumber % 10000;
        switch (remainder)
        {
        case 0:
            hexaDecimal = hexaDecimal.append("0");
            break;
        case 1:
            hexaDecimal = hexaDecimal.append("1");
            break;
        case 10:
            hexaDecimal = hexaDecimal.append("2");
            break;
        case 11:
            hexaDecimal = hexaDecimal.append("3");
            break;
        case 100:
            hexaDecimal = hexaDecimal.append("4");
            break;
        case 101:
            hexaDecimal = hexaDecimal.append("5");
            break;
        case 110:
            hexaDecimal = hexaDecimal.append("6");
            break;
        case 111:
            hexaDecimal = hexaDecimal.append("7");
            break;
        case 1000:
            hexaDecimal = hexaDecimal.append("8");
            break;
        case 1001:
            hexaDecimal = hexaDecimal.append("9");
            break;
        case 1010:
            hexaDecimal = hexaDecimal.append("A");
            break;
        case 1011:
            hexaDecimal = hexaDecimal.append("B");
            break;
        case 1100:
            hexaDecimal = hexaDecimal.append("C");
            break;
        case 1101:
            hexaDecimal = hexaDecimal.append("D");
            break;
        case 1110:
            hexaDecimal = hexaDecimal.append("E");
            break;
        case 1111:
            hexaDecimal = hexaDecimal.append("F");
            break;
        default:
            cout<<"Md. Yousuf Ali"<<endl;
            break;
        }

        binaryNumber /= 10000;

    }

    // String reverse
    reverse(hexaDecimal.begin(), hexaDecimal.end());
    cout<<"The Hexadecimal Number: "<<hexaDecimal<<endl;

    
    return 0;
}

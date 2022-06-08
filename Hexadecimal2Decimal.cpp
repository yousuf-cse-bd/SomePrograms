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
    cout<<"Hexadecimal Number: "<<hexadecimalValue<<endl;
    int power = hexadecimalValue.size();
    long long int decimal = 0; // sum all char pow(16, power)

    for(int i = 0; hexadecimalValue[i] != '\0'; i++)
    {
        int value;
        if(hexadecimalValue[i] >= '0' && hexadecimalValue[i]<='9')
        value = hexadecimalValue[i] - 48; // char to decimal number

        else if(hexadecimalValue[i] >= 'A' && hexadecimalValue[i] <= 'F')
        value = hexadecimalValue[i] - 65 + 10;

        else if(hexadecimalValue[i] >= 'a' && hexadecimalValue[i] <= 'f')
        value = hexadecimalValue[i] - 97+10;

        // cout<<"v = "<<value<<endl;
        decimal += value*pow(16, --power);
    }

    cout<<"Decimal Number: "<<decimal<<endl;
    return 0;
}

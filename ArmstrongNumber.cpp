/**
 * @file 5.ArmstrongNumber.cpp
 * @author your name (you@domain.com)
 * @brief WAP to check armstrong number?
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter a number for check armstrong?: ";
    cin>>n;
    // check positive || not
    unsigned int toPositiveNumber = (n > 0) ? n : n*(-1);
    unsigned int isArmstrong = toPositiveNumber;
    unsigned int armstrongNumber = 0;
    while(toPositiveNumber != 0)
    {
        unsigned int digitWise = toPositiveNumber % 10;
        armstrongNumber = armstrongNumber + (digitWise * digitWise * digitWise);
        toPositiveNumber /= 10;
    }

    (isArmstrong == armstrongNumber) ? cout<<isArmstrong<<" is an Armstrong Number.\n":
    cout<<isArmstrong<<" is not an Armstrong Number..!"<<endl;

    return 0;
}

/**
 * @file StrongNumber.cpp
 * @author Md. Yousuf Ali(you@domain.com)
 * @brief WAP to check a strong number
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

/*Factorial function simple using loop.*/
unsigned int factorial(unsigned int n)
{
    unsigned int factoralValue = 1;
    for (unsigned int increament = 2; increament <= n; increament++)
    {
        factoralValue *= increament;
    }
    return factoralValue;
    
}
/*Is strong number checking?*/
unsigned int isStrongNumber(int number)
{
    unsigned int positiveNumber = (number > 0) ? number : number*(-1);
    unsigned int tempNumber = positiveNumber;

    unsigned int strongSum = 0;
    while(tempNumber != 0)
    {
        unsigned int digitWise = tempNumber % 10;
        strongSum = strongSum + factorial(digitWise);
        // cout<<digitWise<<endl;
        tempNumber /= 10;
    }
    return strongSum;
}   

int main(int argc, char const *argv[])
{
    /* code */
    int number;
    cout<<"Enter the number to check strong number?: ";
    cin>>number;

    unsigned int strongNumber = isStrongNumber(number);
    // cout<<"From Retunr value: "<<strongNumber<<endl; 
    // cout<<"Function called...Done."<<endl;
    (strongNumber == number) ? cout<<number<<" is strong number.\n":
    cout<<number<<" is not strong number...!"<<endl;

    return 0;
}

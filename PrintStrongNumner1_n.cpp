/**
 * @file PrintStrongNumner1_n.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief Program to print the strong numbers from 1 to n
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
    int N;
    cout<<"Enter the 'Nth' Number?: ";
    cin>>N;
    for(unsigned int number = 1; number <= N; number++)
    {
        unsigned int strongNumber = isStrongNumber(number);
    
        if(number == strongNumber)
        {
            cout<<"The strong number: "<<number<<endl;
        }
    }


    

    return 0;
}
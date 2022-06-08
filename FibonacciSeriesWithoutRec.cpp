/**
 * @file FibonacciSeriesWithoutRec.cpp
 * @author Yousuf (you@domain.com)
 * @brief Write a C program to print fibonacci series without recursion
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
    int n = 10;
    int firstValue = 0, secondValue = 1;
    int thirdValue;
    for(int i = 1; i<=10; i++)
    {
        thirdValue = firstValue + secondValue;
        cout<<firstValue<<" ";
        firstValue = secondValue;
        secondValue = thirdValue;
        
    }
    return 0;
}

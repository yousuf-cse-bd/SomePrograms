/**
 * @file FibonacciSeriesUsingRecursion.cpp
 * @author Yousuf (you@domain.com)
 * @brief WAP to print fibonacii series using recursion
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

void printFibonacciSeries(int n)
{
    // static: runtime not initialize multiple times
    static int n1 = 0, n2 = 1, n3;
    if(n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout<<n3<<" ";
        printFibonacciSeries(n-1);
    }
}

int main(int argc, char const *argv[])
{
    int n = 15;
    cout<<"0 1 ";
    printFibonacciSeries(n-2);
    
    return 0;
}

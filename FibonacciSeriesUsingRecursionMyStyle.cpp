/**
 * @file FibonacciSeriesUsingRecursionMyStyle.cpp
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

int fibonacciSeries(int n)
{
    // static int n1 = 0, n2 = 1, n3;
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    {
        return fibonacciSeries(n-1) + fibonacciSeries(n - 2);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Fibonacci Series: ";
    for(int i = 0; i<=10; i++)
    {
        cout<<fibonacciSeries(i)<<" ";
    }
    cout<<endl;
    return 0;
}

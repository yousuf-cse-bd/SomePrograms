/**
 * @file FactorialProgramUsingRecursion.cpp
 * @author Md.  Yousuf Ali (you@domain.com)
 * @brief WAP factorial number using recursion 
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

long long unsigned factorial(unsigned positiveNum)
{
    if(positiveNum == 1)
    return 1;
    else
    return positiveNum*factorial(positiveNum - 1);
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter the postivie value here: ";
    cin>>n;

    unsigned positiveNumber = (n > 0) ? n: n*(-1);
    cout<<positiveNumber<<"! = "<<factorial(positiveNumber)<<endl;

    return 0;
}

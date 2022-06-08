/**
 * @file SumOfDigits.cpp
 * @author your name (you@domain.com)
 * @brief WAP to print sum of digits
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
    cout<<"Enter a postiive number here: ";
    int n;
    cin>>n;
    unsigned int number = (n>0) ? n : n*(-1);

    unsigned int sum = 0;
    while (number != 0)
    {
        /* code */
        unsigned int digitWise = number % 10;
        sum += digitWise;
        number /= 10;
    }
    cout<<n<<" Sum of the Digits: "<<sum<<endl;
    
    return 0;
}

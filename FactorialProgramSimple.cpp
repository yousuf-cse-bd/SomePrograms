/**
 * @file FactorialProgramSimple.cpp
 * @author Md. Yousuf Ali(you@domain.com)
 * @brief Factrial of n is the product of all descending integers
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
    cout<<"Enter the positive number: ";
    cin>>n;
    unsigned int number, factorial = 1;
    number = (n > 0) ? n : n*(-1);

    for(unsigned i = number; i>=2; i--)
    {
        factorial *= i;
    }
    cout<<number<<"! = "<<factorial<<endl;

    return 0;
}



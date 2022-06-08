/**
 * @file PrimeNumberSimple.cpp
 * @author Yousuf (you@domain.com)
 * @brief WAP simple prime number
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
    int number;
    cout<<"Enter the number here: ";
    cin>>number;
    unsigned int positiveNumber;
    positiveNumber = (number > 0) ? number : number * (-1);
    // cout<<positiveNumber<<endl;

    bool status = true;
    for(int i = 2; i*i <= positiveNumber; i++)
    {
        if(positiveNumber % i == 0)
        {
            status = false;
            break;
        }
        // cout<<i<<" ";
    }
    cout<<endl;
    (status == true) ? cout<<positiveNumber<<" is a Prime Number\n":
    cout<<positiveNumber<<" is not a Prime Number...!"<<endl;

    
    return 0;
}

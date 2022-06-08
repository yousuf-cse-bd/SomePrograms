/**
 * @file ReverseNumber.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to reverse given number
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
    cout<<"Enter a Positive Number Here: ";
    cin>>n;
    unsigned int number = (n > 0) ? n : n*(-1);

    unsigned reverseNumber = 0;
    while (number != 0)
    {
        /* code */
        unsigned int digitWise = number % 10; 
        reverseNumber = reverseNumber * 10 + digitWise;
        number /= 10;
    }
    cout<<n<<"\t"<<reverseNumber<<endl;
    
    return 0;
}

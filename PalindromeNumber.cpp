/**
 * @file PalindromeNumber.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to check palindrome number
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
    int palindromeNumber;
    cout<<"Enter the number to check palindrome number?: ";
    cin>>palindromeNumber;

    palindromeNumber = (palindromeNumber > 0) ? palindromeNumber : palindromeNumber*(-1);
    // cout<<palindromeNumber<<endl;
    unsigned int manipulationNumber = palindromeNumber;
    unsigned expectedPalNum = 0;
    while (manipulationNumber != 0)
    {
        /* code */
        unsigned int digitWise = manipulationNumber % 10;
        expectedPalNum = expectedPalNum * 10 + digitWise;
        manipulationNumber /= 10;
    }
    // cout<<expectedPalNum<<endl;
    (expectedPalNum == palindromeNumber) ? cout<<expectedPalNum<<" is Palindrome Number.\n":
    cout<<"Not Palindrome Number...!"<<endl;
    
    return 0;
}


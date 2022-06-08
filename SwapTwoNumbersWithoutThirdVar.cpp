/**
 * @file SwapTwoNumbersWithoutThirdVar.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to swap two numbers without using third variable
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
    // By using '+' and '-' operators
    int num1, num2;
    num1 = 15, num2 = 13;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<"Num1 = "<<num1<<"\t\tNum2 = "<<num2<<endl;

    // By Using '*' and '/' operators
    int n1 = 50, n2 = 100;
    n1 = n1 * n2;
    n2 = n1 / n2;
    n1 = n1 / n2;
    cout<<"N1 = "<<n1<<"\t\tN2 = "<<n2<<endl;

    // By using '^' operator
    int number1 = 25, number2 = 33;
    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;

    cout<<"Number1 = "<<number1<<"\t\tNumber2 = "<<number2<<endl;


    return 0;
}

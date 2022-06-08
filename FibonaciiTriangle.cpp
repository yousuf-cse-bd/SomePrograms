/**
 * @file FibonaciiTriangle.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to generate fibonacci triangle
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int number = 5;
    int i,j;
    int firstTerm, secondTerm, finalTerm;
    
    for(i = 1; i<=5; i++){
        firstTerm = 0, secondTerm = 1;
        cout<<secondTerm<<"\t";
        for(j = 1; j<i; j++)
        {
            finalTerm = firstTerm + secondTerm;
            cout<<finalTerm<<"\t";
            firstTerm = secondTerm;
            secondTerm = finalTerm;
        }
        
        cout<<endl;
    }
    return 0;
}

/**
 * @file NumberTriangleLikePyramid.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to print number trianle like pyramid
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
// #include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int number = 9;

    // Outer loop control row values
    for(int row = 1; row <= number; row++)
    {
        // first inner loop control spaces
        for(int space = row; space <= number; space++)
        {
            cout<<" ";
            // cout<<" ";
        }
        // Print something here number
        // Left Part
        int rightPart;
        for(int column = 1; column<=row; column++)
        {
            cout<<column;
            // cout<<" ";
            /*Condtion flase then rightPart var assighned*/
            rightPart = column; 
        }
        // Right part
        // cout<<"Right Part: "<<rightPart<<endl;
        for(int r = rightPart - 1; r>=1; r--)
        {
            cout<<r;
            // cout<<" ";
        }
      
        // Each line break: print new line
        cout<<endl;
    }

    return 0;
}

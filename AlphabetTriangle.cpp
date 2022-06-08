/**
 * @file AlphabetTriangle.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to print alphabet triangle
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

    int row, column, space, rightPart, number = 9;
    char letter = 'A';
    for(row = 1; row<=number; row++)
    {
        // left number of spaces
        for(space = row; space <= number; space++)
        {
            cout<<" ";
        }
        // left part print
        for(column = 1; column<=row; column++)
        {
            printf("%c", letter++);
        }
        // Right Part
        --letter;
        for(rightPart = column - 2; rightPart>=1; rightPart--)
        {
            printf("%c", --letter);
        }
        cout<<endl;
    }


    return 0;
}

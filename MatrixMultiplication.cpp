/**
 * @file MatrixMultiplication.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to print mulliplication of 2 matrix
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
    
    int rowWised, columnWised; // matrix traversing vars
    int rowA, columnA; // First matrix creators
    rowA = 3;
    columnA = 3;
    // First matrix is created
    int A[rowA][columnA] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    // First matrix print
    cout<<"First Matrix Elements:"<<endl;
    for(rowWised = 0; rowWised < rowA; rowWised++)
    {
        for(columnWised = 0; columnWised < columnA; columnWised++)
        {
            cout<<A[rowWised][columnWised]<<" ";
        }
        cout<<endl;
    }

    // Second matrix creators
    int rowB = 3, columnB = 3; 
    // Check matrix multiplication possoble or not
    // First matrix COLUMN == ROW of second matrix
    if(columnA == rowB)
    {
        // Second martix is created
        int B[rowB][columnB] = {
        {3, 3, 3},
        {2, 2, 2},
        {1, 1, 1}
    };
    // Second matrix print
    cout<<"Second Matrix Elements:"<<endl;
    for(rowWised = 0; rowWised < rowB; rowWised++)
    {
        for(columnWised = 0; columnWised < columnB; columnWised++)
        {
            cout<<B[rowWised][columnWised]<<" ";
        }
        cout<<endl;
    }
        // Expected matrix
        int productAB[rowA][columnB];
        for(rowWised = 0; rowWised < rowA; rowWised++)
        {
            for(columnWised = 0; columnWised<columnB; columnWised++)
            {
                productAB[rowWised][columnWised] = 0;
                for(int k = 0; k< rowB; k++) // columnA || rowB 
                {
                    productAB[rowWised][columnWised] += A[rowWised][k] * B[k][columnWised];
                }
            }
        }

        cout<<"\nProduct of the matrix A and B:"<<endl;
        for(rowWised = 0; rowWised < rowA; rowWised++)
        {
            for(columnWised = 0; columnWised < columnB ; columnWised++)
            {
                cout<<productAB[rowWised][columnWised]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<columnA<<" != "<<rowB<<" [Must be Equal] but there not...!"<<endl;

    
    return 0;
}

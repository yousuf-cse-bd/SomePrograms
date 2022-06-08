/**
 * @file PrintHelloWithoutSemicolon.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief Write a program to print "hello"without using semicolon
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
    // using if statement
    if(cout<<"Hello"<<endl){/*Block optional*/}
    // using while loop
    while(!printf("World!\n")){/*Block optional*/}
    // using switch
    switch(printf("Yousuf")){/*Block must be*/}
    // USING do...while [Loop]
    do
    {
        /* code */
        cout<<"\nExecution\n"<<endl;
    } while (!printf("May be here is no semicolon\n"));
    

    return 0;
}

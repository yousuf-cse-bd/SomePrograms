/**
 * @file GradingSystem.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief Varendra University Grading System
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

void displayGradeTable()
{
    for(int i = 0; i<80; i++)
    cout<<"=";
    cout<<"\n\tRange of Marks\t\t\tLetter Grade\t\tGrade Point"<<endl;
    for(int i = 0; i<80; i++)
    cout<<"=";
    string gradeTable[10][3] = {
        {"80% or less than101%", "A+(A Plus)", "4.00"},
        {"75% to less than 80%", "A(A Regular)", "3.75"},
        {"70% to less than 75%", "A-(A Minus)", "3.50"},
        {"65% to less than 70%", "B+(B Plus)", "3.25"},
        {"60% to less than 65%", "B(B Regular)", "3.00"},
        {"55% to less than 60%", "B-(B Minus)", "2.75"},
        {"50% to less than 55%", "C+(C Plus)", "2.50"},
        {"45% to less than 50%", "C(C Regular)", "2.25"},
        {"40% to less than 45%", "D(D Regular)", "2.00"},
        {"Less than 40%\t", "F(Failure)", "0.00"}
    };

    cout<<endl;
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<gradeTable[i][j]<<"\t\t\t";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    displayGradeTable();

    float yourMarks;
    cout<<"Enter Your Marks in '%'?: ";
    cin>>yourMarks;
    // to round figure 
    int myMarks = ceil(yourMarks);
    // cout<<"Your marks: "<<yourMarks<<endl;
    // cout<<"My marks: "<<myMarks<<endl;
    if(myMarks >= 80 && myMarks<=100)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: A Plus(A+)***."<<endl;
    }
    else if (myMarks >= 75 && myMarks<80)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: A Regular(A)."<<endl;
    }
    else if (myMarks >= 70 && myMarks<75)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: A Minus (A-)."<<endl;
    }
    else if (myMarks >= 65 && myMarks<70)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: B Plus (B+)."<<endl;
    }
    else if (myMarks >= 60 && myMarks<65)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: B Regular(B)."<<endl;
    }
    else if (myMarks >= 55 && myMarks<60)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: B Minus(B-)."<<endl;
    }
    else if (myMarks >= 50 && myMarks<55)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: C Plus(C+)."<<endl;
    }
    else if (myMarks >= 45 && myMarks<50)
    {
        cout<<"Your Result: C Regular(C)."<<endl;
    }
    else if (myMarks >= 40 && myMarks<45)
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: D Regular(D)Pass*."<<endl;
    }
    else if (myMarks < 40 )
    {
        cout<<"Your Marks: "<<myMarks<<"% and Result: Failure(F)."<<endl;
    }
    else
    {   
        cout<<"Your Input: "<<yourMarks<<" ";
        cout<<"Enter Your Right Marks Here, Thanks."<<endl;
    }
    
    return 0;
}

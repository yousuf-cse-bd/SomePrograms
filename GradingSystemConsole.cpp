/**
 * @file GradingSystemConsole.cpp
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief Simple grading system using class
 * @version 0.1
 * @date 2023-01-17
 * @since TuesDay; 05:35 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#pragma pack(1)
using namespace std;

class GradingSyestem{
    /*Class attributes or Member varibles*/
private:
    double marks {0.0};
    void displayGradingTable(void);
    /*Class member methods*/
public:
    GradingSyestem(){
        displayGradingTable();
    }
    void inputMarks(void){
        cout<<"Enter Your Makrs in [%] Here?: ";
        cin>>marks;
        marks = ceil(marks);
    }
    void evaluateMarks(void){
        constexpr float aPlusLowerLimit {80.0f}, aPlusUpperLimit {100.0f};
        constexpr float aRegularLowerLimit {75.0f}, aRegularUpperLimit {79.0f};
        constexpr float aMinusLowerLimit {70.0f}, aMinusUpperLimit {74.0f};
        constexpr float bPlusLowerLimit {65.0f}, bPlusUpperLimit {69.0f};
        constexpr float bRegularLowerLimit {60.f}, bRegularUpperLimit {64.f};
        constexpr float bMinusLowerLimit {float(55.0f)}, bMinusUpperLimit {float{59.0f}};
        constexpr float cPlusLowerLimit {float{50.0f}}, cPlusUpperLimit {float(54.0f)};
        constexpr float cRegularLowerLimit {float{45.0f}}, cRegularUpperLimit {float{49.0f}};
        constexpr float dRegularLowerLimit {float{40.0f}}, dRegularUpperLimit {float{44.0f}};
        constexpr float failureZero2Below40 {float{39.0f}};
        cout<<fixed<<setprecision(2);
        if(marks >= aPlusLowerLimit && marks <= aPlusUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade A-Plus[A+]."<<endl;
        }
        else if(marks >= aRegularLowerLimit && marks <= aRegularUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade A-Regular[A]."<<endl;
        }
        else if(marks >= aMinusLowerLimit && marks <= aMinusUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade A-Minus[A-]."<<endl;
        }
        else if(marks >= bPlusLowerLimit && marks <= bPlusUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade B-Plus[B+]."<<endl;
        }
        else if(marks >= bPlusLowerLimit && marks <= bPlusUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade B-Plus[B+]."<<endl;
        }
        else if(marks >= bRegularLowerLimit && marks <= bRegularUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade B-Regular[B]."<<endl;
        }
        else if(marks >= bMinusLowerLimit && marks <= bMinusUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade B-Minus[B-]."<<endl;
        }
        else if(marks >= cPlusLowerLimit && marks <= cPlusUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade C-Plus[C+]."<<endl;
        }
        else if(marks >= cRegularLowerLimit && marks <= cRegularUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade C-Regular[C]."<<endl;
        }
        else if(marks >= dRegularLowerLimit && marks <= dRegularUpperLimit){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade D-Regular[D]."<<endl;
        }else if(marks >= 0 && marks <= failureZero2Below40){
            cout<<"Your marks: "<<marks<<" % "<<endl;
            cout<<"The letter grade F."<<endl;
            cout<<"You have to concious about your result...!"<<endl;
        }else{
            if(getMarks() > 0){
                cout<<"Invalid..!"<<endl;
            }
        }
    }
    const double getMarks(void){
        return marks;
    }
};

inline void GradingSyestem :: displayGradingTable(void){
    const vector <vector <string>> gradingTable {
        {"80 to 100%", "A+(A Plus)", "4.00"},
        {"75 to 79%", "A(A Regular)", "3.75"},
        {"70 to 74%", "A-(A Minus)", "3.50"},
        {"65 to 69%", "B+(B Plus)", "3.25"},
        {"60 to 64%", "B(B Regular)", "3.00"},
        {"55 to 59%", "B-(A Minus)", "2.75"},
        {"50 to 54%", "C+(C Plus)", "2.50"},
        {"45 to 49%", "C(C Regular)", "2.25"},
        {"40 to 44%", "D(D Regular)", "2.00"},
        {"Below 40%", "F(Failure)", "0.00"}
        };
    constexpr unsigned int columnSpace {20};
    cout<<left<<setfill('-');
    cout<<"============================================================"<<endl;
    cout<<setw(columnSpace)<<"Range of Marks"<<setw(columnSpace)<<"Letter Grade"<<setw(columnSpace)<<"Grade Point"<<endl;
    cout<<"============================================================"<<endl;
    for(const auto &row : gradingTable){
        for(const auto &column: row){
            cout<<setw(columnSpace)<<column;
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    GradingSyestem gradingSyestem;
    do{
        gradingSyestem.inputMarks();
        gradingSyestem.evaluateMarks();
        cout<<"-------------------------------------"<<endl;
    }while(gradingSyestem.getMarks()>0);
    cout<<"\t\tEXIT...!HappyEnding...!"<<endl;
    return 0;
}

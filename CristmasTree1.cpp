/**
 * @file CristmasTree1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Print A Christmas Tree | C++ Programming Example
 * @version 0.1
 * @date 2023-06-20
 * @since TuesDayDay; 09:59 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	int height{};
	cout<<"Enter height for cristmas tree?: ";
	cin>>height;
	
	height = abs(height);
	
	for(int row{1}; row <= height; row++){
		for(int space {row}; space <= height; space++){
			cout<<" ";
		}
		for(int column {1}; column <= ((row << 1)-1); column++){
			cout<<'*';
		}
		cout<<endl;
	}
	
	for(int i{1}; i <= 5; i++){
		cout<<setw(height+1)<<"*"<<endl;
	}
	
	system("pause>0");
    return 0;
}




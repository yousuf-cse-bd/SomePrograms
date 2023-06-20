/**
 * @file ArrayIndexFun1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array Index Coding Trick | C++ Programming Example
 * @version 0.1
 * @date 2023-06-20
 * @since TuesDayDay; 05:59 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 
#include <iostream>
#include <ctime>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	int array1[] {10, 20, 30, 40, 50};
	
	const int size{sizeof(array1)/sizeof(int)};
	
	/*Accessing array with pointer notation -1*/
	for(int i{0}; i < size; i++){
		cout<<"["<<i<<"]: "<<*(array1 + i)<<endl;
	}
	cout<<"--------------------------------------"<<endl;
	/*Accessing array with pointer notation -2*/
	for(int i{0}; i < size; i++){
		cout<<"["<<i<<"]: "<<*(i + array1)<<endl;
	}
	
	cout<<"======================================"<<endl;
	/*Accessing array with sub script notation -1*/
	for(int i{0}; i < size; i++){
		cout<<"["<<i<<"]: "<<array1[i]<<endl;
	}
	
	cout<<"--------------------------------------"<<endl;
	
	/*Accessing array with sub script notation -1*/
	for(int i{0}; i < size; i++){
		cout<<"["<<i<<"]: "<<i[array1]<<endl;
	}
	
	system("pause>0");
    return 0;
}


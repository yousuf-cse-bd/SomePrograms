/**
 * @file PrintOwnSouceCode1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Program That Prints Its Own Source Code
 * @version 0.1
 * @date 2023-05-24
 * @since WednesDay; 08:59 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");
	
	char c{'\0'};
	FILE *fp{fopen(__FILE__, "r")};
	
	while((c = getc(fp)) != EOF){
		putchar(c);
	}
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};
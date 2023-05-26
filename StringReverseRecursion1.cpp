/**
 * @file StringReverseRecursion1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Use Recursion To Print String In Reverse | C Programming Example
 * @version 0.1
 * @date 2022-05-26
 * @since FriDay; 09:35 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 
#include <iostream>
#include <iomanip>
using namespace std;

void printReverse(char str[]){
	if(*str != '\0'){
		printReverse(str + 1);
		cout<<*str;
	}
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
    
	char str[] {"This is the way."};
	cout<<str<<endl;
	printReverse(str);
	
	system("pause>0");
    return 0;
}



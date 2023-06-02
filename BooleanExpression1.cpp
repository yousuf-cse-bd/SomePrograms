/**
 * @file BooleanExpression1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Boolean and  conditional expressions | C++ Programming Example
 * @version 0.1
 * @date 2022-06-02
 * @since FriDay; 10:07 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

/*This function works boolean evaluation. */
const bool isSameFirstChar(const string &str1, const string &str2){
	
//	return (str1.at(0) == str2.at(0)); /*Worked done*/
	return (*(str1.begin()) == *(str2.begin()));
}

/*This function works condtional expression*/
const bool isSameLastChar(const string &str1, const string &str2){
	
	return ( (str1.at(str1.length()-1) == str2.at(str2.length()-1) ) ? true:false);
}


int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	const string str1 {"Yousuf"};
	const string str2 {"Yousuf"};
	
	cout<<boolalpha;
	cout<<isSameFirstChar(str1, str2)<<endl;

	cout<<isSameLastChar(str1, str2)<<endl;
    return 0;
}
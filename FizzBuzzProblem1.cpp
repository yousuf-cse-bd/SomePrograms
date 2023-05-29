/**
 * @file FizzBuzzProblem1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Complex / compound condition first | C++ Programming Example
 * @version 0.1
 * @date 2022-05-29
 * @since MonDay; 05:38 PM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

 
#include <iostream>
#pragma pack(1)
using namespace std;

void fizzBuzzProblem(const size_t &startPoint, const size_t &endPoinrt){
	
	for(size_t i{min(startPoint, endPoinrt)}; i<= max(startPoint, endPoinrt); i++){
		
		if((i % 3 == 0) && (i % 5 == 0)){
			cout<<"Fizz Buzz"<<endl;
		}
		else if(i % 3 == 0){
			cout<<"Fizz"<<endl;
		}
		else if(i % 5 == 0){
			cout<<"Buzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}
	}
	return;
}


int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	fizzBuzzProblem(1, 100);
	system("pause>0");
    return 0;
}
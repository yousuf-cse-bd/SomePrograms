/**
 * @file NumberGuessingGame1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Number Guessing Game | C++ Programming Example
 * @version 0.1
 * @date 2022-05-27
 * @since SaturDay; 09:24 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	srand(time(nullptr));
	const unsigned int limit{100};
	int randomNumber{rand() % static_cast <int> (limit)};
		
	size_t tryCount{1};
	
	int guessNumber{0};
	do{
//		cout<<"Random: "<<randomNumber<<endl;
		cout<<"Enter a number here[0-99]: ";
		cin>>guessNumber;
		if(guessNumber == randomNumber){
			continue;
		}
		else if(guessNumber < randomNumber){
			cout<<"Guess higher..."<<endl;
		}
		else{
			cout<<"Guess lower..."<<endl;
		}
		tryCount++;
	}while(guessNumber != randomNumber);
	
	cout<<"-----------------------------------------"<<endl;
	switch (tryCount){
		case 1: cout<<"You got the first attempt!"<<endl; break;
		case 2: cout<<"You got the second attempt!"<<endl; break;
		case 3: cout<<"You got the third attempt!"<<endl; break;
		default: cout<<"You got the "<<tryCount<<" attempt."<<endl; break;
	}
	system("pause>0");
    return 0;
}
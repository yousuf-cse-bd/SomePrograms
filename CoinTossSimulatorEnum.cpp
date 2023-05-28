/**
 * @file CoinTossSimulatorEnum.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Coin Toss Simulator Uisng Random Number| C++ Programming Example
 * @version 0.1
 * @date 2022-05-28
 * @since SunDay; 10:49 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;

typedef enum coinToss{TAIILS, HEADS} coin;

const coin flipCoin(const int &randomNumber){
	if(randomNumber & 1){ /*Odd->1*/
		return HEADS; /*1*/
	}
	else{
		return TAIILS; /*0*/
	}
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	srand(time(nullptr));
	const unsigned int limit{10};
	
	for(unsigned int i{1}; i <= limit; i++){
		if(flipCoin(rand())){
			cout<<"HEADS"<<endl;
		}
		else{
			cout<<"\tTAILS"<<endl;
		}
	}
	
	system("pause>0");
    return 0;
}
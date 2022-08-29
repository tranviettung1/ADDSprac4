#include "Reverse.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
Reverse::Reverse(){
}

int Reverse::reverseDigit(int value){
	if ( value < 0){
		return -1;
	}
	if ( value < 10){
		return value;
	}
    else{
    	int length = to_string(value).length();
    	return (value%10)*pow(10,length - 1) + reverseDigit(value/10);
	}	
}

string Reverse::reverseString(string letters){
	int length = letters.length();
	if ( length == 1 ){
		return letters;
	}
	else{
		char last  = letters[length - 1];
		string top;
		top.push_back(last);
		letters.pop_back();
		return top.append(reverseString(letters));
	}
}

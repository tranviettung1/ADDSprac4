#include <iostream>
#include <string>
#include <cmath>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <map>
using namespace std;
bool isNumber (string num){
	int length = num.length();
	for ( int i = 0; i < length ; i++){
		if (isdigit(num[i]) == false){
			return false;
		}
	}
	return true;
}



int main(){
	Reverse re;
	Truckloads truck;
	EfficientTruckloads etruck;
    string number; string input1; 
    string input2; 
    string input3; 
    string truck_ver; string etruck_ver; //output for truck and etruck
    string str; string input4;
    cin >> input1;
	if (isNumber(input1) == false){
		number = "ERROR";
	}
	else{
		if ( re.reverseDigit(stoi(input1)) == -1 ){
			number = "ERROR";
		}
		else{
			number = to_string( re.reverseDigit(stoi(input1)));
		}
	}
    cin >> input4;
    str = re.reverseString(input4);
    
    cin >> input2;
    cin >> input3;
    if (isNumber(input2) == false || isNumber(input3) == false){
    	truck_ver = "ERROR";
    	etruck_ver = "ERROR";
	}
	else{
		if(truck.numTrucks(stoi(input2), stoi(input3)) == -1){
			truck_ver = "ERROR";
    	    etruck_ver = "ERROR";
		}
		else{
			truck_ver = to_string(truck.numTrucks(stoi(input2), stoi(input3)));
			etruck_ver = to_string(etruck.numTrucks(stoi(input2), stoi(input3)));
		}
	}
	
	cout << number << " " << str << " " << truck_ver << " " << etruck_ver << endl;
	
 
	
	return 0;
}

#include "EfficientTruckloads.h"
#include <iostream>
#include <map>
using namespace std;
EfficientTruckloads::EfficientTruckloads(){
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
	int number = 0;
	if (numCrates <= 0 || loadSize <= 0 ){
		return 0;
	}
	if (numCrates <= loadSize){
		return 1;
	}
	if ( table[numCrates]!= 0){
		return table[numCrates];
	}
	else{
		if ( numCrates%2 == 0){
			int pile1 = numCrates/2;
		    int pile2 = numCrates/2;
			table[numCrates] = numTrucks(pile1, loadSize) + numTrucks(pile2 ,loadSize);
			return table[numCrates];
		}
		else if (numCrates%2 != 0){
			int pile1 = numCrates/2;
		    int pile2 = numCrates/2 + 1;
			table[numCrates] = numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
			return table[numCrates];
		}
	}
	return number; 
}


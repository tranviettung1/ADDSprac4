#include <iostream>
#include "Truckloads.h"
Truckloads::Truckloads(){
}

int Truckloads::numTrucks(int numCrates, int loadSize){
	int number = 0;
	if (numCrates <= 0 || loadSize <= 0 ){
		return 0;
	}
	if (numCrates <= loadSize){
		return 1;
	}
	if ( numCrates%2 == 0){
		int pile1 = numCrates/2;
		int pile2 = numCrates/2;
		return numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
	}
	else if ( numCrates%2 != 0 ){
		int pile1 = numCrates/2;
		int pile2 = numCrates/2 + 1;
		return numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
	}	
	return number;
}




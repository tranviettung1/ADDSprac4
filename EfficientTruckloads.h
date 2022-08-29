#ifndef EFFICIENT_TRUCKLOADS
#define EFFICIENT_TRUCKLOADS
#include <map>
class EfficientTruckloads{
	public:
	EfficientTruckloads();
	int numTrucks(int numCrates, int loadSize);
	std::map<int, int> table;
	
};

#endif

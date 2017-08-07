/*
Finding the volume(area) of water filled within Histogram
Time Complexity O(N) --- Space Complexity O(N)
*/

#include<iostream>
using namespace std;

int findArea(int Hist[], int size) {
	int *leftMaxHeight = new int[size];
	int *rightMaxHeight = new int[size];
	int *maxWaterLevel = new int[size];
	int *water = new int[size];

	// Finding the heighest bar on the left of each index (including itself)
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < Hist[i])
			max = Hist[i];
		leftMaxHeight[i] = max;
	}

	// Finding the heighest bar on the right of each index (including itself)
	max = 0;
	for (int i = (size - 1); i >= 0; i--) {
		if (max < Hist[i])
			max = Hist[i];
		rightMaxHeight[i] = max;
	}

	// Finding the water that can be hold in each index
	// by finding the minimum of the highest bars at left and right
	//i.e. water that the index could have contained provided the bars were hollow
	for (int i = 0; i < size; i++) {
		maxWaterLevel[i] = leftMaxHeight[i] < rightMaxHeight[i] ? leftMaxHeight[i] : rightMaxHeight[i];
	}

	// Subtracting the bar heights to find the actual water contained in each index
	for (int i = 0; i < size; i++) {
		water[i] = maxWaterLevel[i] - Hist[i];
	}

	// Findind the total sum of water volume by adding all the water contained in each index
	int area = 0;
	for (int i = 0; i < size; i++) {
		area += water[i];
	}

	return area;
}




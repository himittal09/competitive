#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int totalSum = 0, pathSum = 0;
        if (start > destination)
        {
            swap(start, destination);   
        }
        for (int i=start; i<destination; i++)
        {
            pathSum += distance[i];    
        }
        for (int i=0; i<start; i++)
        {
            totalSum += distance[i];
        }
        for (int i=destination; i<distance.size(); i++)
        {
            totalSum += distance[i];
        }
        return pathSum < totalSum ? pathSum : totalSum;
    }
};
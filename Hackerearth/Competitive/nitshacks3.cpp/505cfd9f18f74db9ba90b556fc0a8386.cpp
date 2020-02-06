#include <iostream>
#include <ios>
#include <vector>

using namespace std; 

int minSwaps(vector<int>& arr) 
{ 
	pair<int, int> arrPos[arr.size()]; 
	for (int i = 0; i < arr.size(); i++) 
	{ 
		arrPos[i].first = arr[i]; 
		arrPos[i].second = i; 
	} 

	sort(arrPos, arrPos + arr.size()); 

	vector<bool> vis(arr.size(), false); 

	int ans = 0; 

	for (int i = 0; i < arr.size(); i++) 
	{ 
		if (vis[i] || arrPos[i].second == i) 
			continue; 

		int cycle_size = 0; 
		int j = i; 
		while (!vis[j]) 
		{ 
			vis[j] = 1; 
			j = arrPos[j].second; 
			cycle_size++; 
		} 

		if (cycle_size > 0) 
		{ 
			ans += (cycle_size - 1); 
		} 
	} 

	return ans; 
} 

int main() 
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> array(n, 0);
    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }
	cout << 2 * minSwaps(array); 
	return 0; 
} 

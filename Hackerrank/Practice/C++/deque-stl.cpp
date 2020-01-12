#include <iostream>
#include <deque>
using namespace std;

int ios_base::sync_with_stdio(false);

void printKMax(int arr[], int n, int k){
	int max = 0;
    int startIndex = 0;
    for (int i=startIndex; i<startIndex+k; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    startIndex++;
    while (startIndex+k <= )
    {
        
    }
    
}

int main(){
  
	int t, n, k;
    int arr[10001];
	cin >> t;
	while(t--) {
    	cin >> n >> k;
    	for(int i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
  	}
  	return 0;
}


#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int k;
	cin >> k;

	vector<int> arr(n);

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int low = 0, high = n-1;
	
	while(low<=high)
	{
		int mid = high + (low-high)/2;
		
		if(arr[mid] == k){
			cout<<mid;
			break;
		}

		if(arr[mid] > k){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
		 
		}	
}

int main()
{
    ios_base::sync_with_stdio(false);
    
 	cin.tie(NULL);
 	cout.tie(NULL);

		solve();
	
}

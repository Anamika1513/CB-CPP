#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

	int arr[n];
	for(int i =0 ; i<n ; i++) cin>>arr[i];

	int l = 0 ;
	int r = n-1;
	int leftmax =0  , rightmax = 0 , water =0;

	while(l<r){
		if(arr[l]<arr[r]){
			if(arr[l]>=leftmax)
				leftmax = arr[l];
			else 
				water += leftmax - arr[l];
			l++;
		}
		else{
			if(arr[r]>=rightmax)
				rightmax = arr[r];
			else
				water += rightmax-arr[r];
			r--;
		}
		
	}
	cout<<water<<endl;
	}
	return 0;
}
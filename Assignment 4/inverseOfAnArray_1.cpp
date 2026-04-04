#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr[n];
	//take the input
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}

	//inverse the array
	int inv[n];
	for(int i=0 ; i<n ; i++){
		inv[arr[i]] = i;
	}

	//print the inverse of array
	for(int i=0 ; i<n ; i++){
		cout<<inv[i]<<" ";
	}

	return 0;
	
}
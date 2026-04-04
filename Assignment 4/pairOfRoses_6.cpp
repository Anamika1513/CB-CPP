#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t ;   // no of test cases
	cin>>t;

	while(t--){
		int n;  //size of array , no of roses
		cin>>n;

		int arr[n];    // price of roses
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}

		int m;   // how much money depak have
		cin>>m;

		sort(arr , arr+n);
		int best_i = 0 , best_j = 0;
		int min_diff = 1000001;
		for(int i=0 ; i<n-1 ; i++){
			for(int j=i+1 ; j<n ; j++){
				if(arr[i]+arr[j]==m){
					if(arr[j]-arr[i]<min_diff){
						best_i = arr[i];
                        best_j = arr[j];
                        min_diff = arr[j] - arr[i];
					}
				}
			}
		}
		cout<<"Deepak should buy roses whose prices are "<< best_i <<" and " <<best_j<<"."<<endl;
		cout<<endl;
	}

	return 0 ;
}
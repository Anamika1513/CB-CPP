
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t ;
	cin>>t;

	while(t--){
		int c1, c2, c3 , c4;
		cin>>c1>>c2>>c3>>c4;

		int n , m;
		cin>>n>>m;

		int arr[n];
		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}

		int brr[m];
		for(int i=0 ; i<m ; i++) cin>>brr[i];

		//rickshaw
		int tr = 0 ;
		for(int i=0 ; i<n ;i++)
			tr += min(arr[i]*c1 , c2);
		tr = min(tr , c3);
		
		//cab
		int tc = 0 ;
		for(int i=0 ; i<m ; i++)
			tc += min(brr[i]*c1,c2);
		tc = min(tc,c3);

		//total
		int t_cost = min(tr+tc , c4);
		cout<<t_cost<<endl;

		

	}

	return 0 ;
}
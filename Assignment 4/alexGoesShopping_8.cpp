#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int price[n];
	for(int i=0 ; i<n ; i++) cin>>price[i];

	int q;   // no of queries
	cin>>q;

	while(q--){
		int a , k;
		cin>>a>>k;

		int count = 0 ;

	// find each price
	for(int i=0 ; i<n ; i++){
		if(a%price[i]==0){
			count++;
		}
	}

	if(count>=k) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	}
	return 0;
}
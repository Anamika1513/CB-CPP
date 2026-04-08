#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m,k,s;
	cin>>n>>m>>k>>s;
    vector<vector <char>> arr(n , vector<char>(m));

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]=='.'){
				s-=2;
			}
			else if(arr[i][j]=='*'){
				s+=5;
			}
			else if(arr[i][j]=='#'){
				break;
			}

			if(j!=m-1){
				s-=1;
			}
			if(s<=k){
		        cout<<"No"<<endl;
		        return 0;
			}
	    }
	}
	
	cout<<"Yes"<<endl;
	cout<<s;
	

	return 0;
}
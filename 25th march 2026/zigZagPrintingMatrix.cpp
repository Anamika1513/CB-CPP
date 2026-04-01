#include<iostream>
#include <vector>
using namespace std;

vector <int> diagonalOrder(vector<vector <int>>&matrix , int n , int m){
	vector <int>ans;
    
    int i=0 , j=0;
    int dir = 1;

    for(int s=0 ; s<n*m ; k++){
        ans.push_back(matrix[i][j]);

        if(dir==1){
            if(j==)
        }
    }

	
}
int main() {

	int n , m;
	cin>>n>>m;
	vector <vector <int>>matrix(n , vector<int>(m));

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>matrix[i][j];
		}
	}

	vector <int> ans = spiralOrder(matrix , n ,m);

	for(int x : ans){
		cout<<x<<", ";
	}

	cout<<"END";
	return 0;
}
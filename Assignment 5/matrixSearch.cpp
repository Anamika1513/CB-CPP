#include<iostream>
#include<vector>
using namespace std;

// int main() {
// 	int n , m ;
// 	cin>>n >>m;

// 	int mat[n][m];

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0; j<m ; j++){
// 			cin>>mat[i][j];
// 		}
// 	}

// 	int target;
// 	cin>>target;

// 	bool found = false;

// 	for(int i=0 ; i<n ; i++){
// 		for(int j=0 ; j<m ; j++){
// 			if(mat[i][j]==target){
// 				found = true;
// 				break;
// 			}
// 		}
// 		if(found) break;
// 	}

// 	cout<<found;
	
// 	return 0;
// }
int main(){
	int n, m ;
	cin>>n>>m;

	vector<vector <int>> matrix(n,vector<int>(m));

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>matrix[i][j];
		}
	}

	int x;
	cin>>x;

	bool found = false;

	for(int i=0 ; i<n ; i++){
		int left = 0 , right = m-1;
		while(left<=right){
			int mid = left + (right-left)/2;
			if(matrix[i][mid]==x){
				found = true;
				break;
			}
			else if(matrix[i][mid]<x) left = mid+1;
			else right = mid-1;
		}
		if(found) break;
	}

	cout<<found;

	return 0;
}
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortRowWise(vector<vector<int>>& matrix , int n , int m){
	for(int i=0 ; i<n ; i++){
		sort(matrix[i].begin(),matrix[i].end());
	}
}

int main () {
	int n, m;
	cin>>n>>m;

	vector <vector<int>> matrix(n , vector<int> (m));

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>matrix[i][j];
		}
	}

	sortRowWise(matrix , n , m);

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
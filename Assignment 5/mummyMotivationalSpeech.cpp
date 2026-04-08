#include<iostream>
#include <vector>
using namespace std;

bool upperTriMatrix(vector<vector <int>>&matrix , int n){

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i<j){
				if(matrix[i][j] != 0){
					return false;	
				}
			}
		}
	}
	return true;
}

int main () {
	int n ;
	cin>>n;

	vector<vector <int>> matrix(n , vector<int>(n));
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>matrix[i][j];
		}
	}

	cout<<(upperTriMatrix(matrix , n) ? "true":"false");


	return 0;
}
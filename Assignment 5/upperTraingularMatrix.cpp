#include<iostream>
#include <vector>
using namespace std;

void upperTriMatrix(vector<vector <int>>&matrix , int n){

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i>j){
				matrix[i][j] = 0;
			}
		}
	}
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

	upperTriMatrix(matrix , n);

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cout<<matrix[i][j];
			if(j != n - 1) cout << " ";
		}
		cout<<endl;
	}
    return 0;
}
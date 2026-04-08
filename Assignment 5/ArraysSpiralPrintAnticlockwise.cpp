#include<iostream>
#include <vector>
using namespace  std;

vector<int> spiralOrder(vector<vector<int>>&matrix,int n , int m){
	vector<int> ans;

	int minr = 0;
	int maxr = n-1;
	int minc = 0;
	int maxc = m-1;

	int tne = m*n;
	int count = 0;

	while(count<tne){

		for(int i=minr ; i<=maxr ; i++){
			ans.push_back(matrix[i][minc]);
			count++;
		}
		minc++;
		if(count>=tne) break;
		
		for(int j=minc ; j<=maxc ; j++){
			ans.push_back(matrix[maxr][j]);
			count++;
		}
		maxr--;
		if(count>=tne) break;

		for(int i=maxr ; i>=minr ; i--){
			ans.push_back(matrix[i][maxc]);
			count++;
		}
		maxc--;
		if(count>=tne) break;

		for(int j=maxc ; j>=minc ; j--){
			ans.push_back(matrix[minr][j]);
			count++;
		}
		minr++;
		if(count>=tne) break;
	}
	return ans;
}

int main() {
	int n , m ;
	cin>>n>>m;

	vector <vector<int>>matrix (n , vector<int>(m));
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>matrix[i][j];
		}
	}

	vector <int> ans = spiralOrder(matrix , n , m);

	for(int x : ans){
		cout<<x<<", ";
	}
	cout<<"END";
	return 0;
}
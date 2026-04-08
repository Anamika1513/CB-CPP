#include<iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector <vector<int>>&matrix , int n){
	

	//transpose
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}

	//rotate
	for(int j = 0; j < n; j++) {
        int top = 0, bottom = n - 1;
        while(top < bottom) {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }

}

int main() {
	int n;
	cin>>n;

	vector <vector <int>> matrix(n , vector<int>(n));

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>matrix[i][j];
		}
	}

	rotateMatrix(matrix , n);

	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}
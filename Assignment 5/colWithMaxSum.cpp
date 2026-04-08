#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<int , int> maxColumnSum(vector<vector <int>>&matrix , int n){
	int maxsum = INT_MIN;
    int idx = 0;
    for(int j = 0; j < n; j++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        if(sum > maxsum) {
            maxsum = sum;
            idx = j+1;
        }
    }
	return {idx, maxsum};
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    pair<int,int> ans = maxColumnSum(matrix , n);
	cout<<ans.first<<" "<<ans.second;


    return 0;
}
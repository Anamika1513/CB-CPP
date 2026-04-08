#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
        long long low = 0 , high = A;
        int ans = 0;

        while(low<=high){
                long long mid = low + (high-low)/2;

                if(mid*mid==A) return mid;
                else if (mid*mid<A) {
                        ans = mid;
                        low = mid+1;
                }
                else high = mid-1;
        }
        return ans;
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);

	return 0;
}
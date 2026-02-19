#include <iostream>
using namespace std;

int main(){    
    int n; 
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++);{
        cin>>arr[i];
    }

    int q;   // no of operations
    cin>>q;
    int x;
    cin>>x;
    int num = n;
    int sum = 0;

    while(x>=0){
        for(int i=0 ; i<n ;i++){
            sum += arr[i]+arr[num];
            num = arr[i];
        }
        x--;
    }
    cout<<"Sum : "<<sum;

    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     // Fast I/O for competitive programming
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     if (!(cin >> n)) return 0;

//     long long current_sum = 0;
//     long long MOD = 1e9 + 7;

//     for (int i = 0; i < n; i++) {
//         long long val;
//         cin >> val;
//         current_sum = (current_sum + val) % MOD;
//     }

//     int q;
//     cin >> q;
    
//     // X ki value actually sum ko affect nahi karti, bas update count (Q) matter karta hai
//     // Har operation mein sum double hota hai
//     for (int i = 0; i < q; i++) {
//         int x;
//         cin >> x;
//         current_sum = (current_sum * 2) % MOD;
//     }

//     cout << current_sum << endl;

//     return 0;
// }
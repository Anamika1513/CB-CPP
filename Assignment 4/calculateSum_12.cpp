#include <iostream>
using namespace std;

int main(){    
    int n; 
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
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
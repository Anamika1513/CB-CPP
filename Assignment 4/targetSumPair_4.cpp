#include <iostream>
using namespace std;

void sumPair(int arr[] , int n ,int target){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            int sum = arr[i]+arr[j];
            if(sum==target){
                if(arr[i]<arr[j]) cout<<arr[i]<<" and "<<arr[j];
                else cout<<arr[j]<<" and "<<arr[i];
            cout<<endl;
            }
        }
    }
}
int main(){
    int n ;
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    // for(int i=0 ; i<n/2 ; i++){
    //     for(int j=1 ; j<n ; j++){
    //         int sum = arr[i]+arr[j];
    //         if(sum==target){
    //             if(arr[i]<arr[j]) cout<<arr[i]<<" and "<<arr[j];
    //             else cout<<arr[j]<<" and "<<arr[i];
    //         cout<<endl;
    //         }
    //     }
    // }

    sumPair(arr , n , target);

    return 0;
}
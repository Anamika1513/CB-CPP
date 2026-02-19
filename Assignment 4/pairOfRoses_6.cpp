#include <iostream>
#include <algorithm>
using namespace std;
void buyRoses(int arr[] , int n , int m ){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            int sum = arr[i]+arr[j];
            
                if(sum==m){
                    cout<<"Deepak should buy roses whose prices are "<<arr[i]<<" and "<<arr[j];
                    cout<<endl;
                }
            
        }
    }
}
int main(){
    int t ;
    
    cin>>t;   // no of test cases
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        // sort(arr , arr + n);

    int m;   // how much money deepak have
    cin>>m;

    
    buyRoses(arr,n ,m);

    }
    
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         int sum = arr[i]+arr[j];
    //         if(sum==m){
    //             cout<<"Deepak should buy roses whose prices are "<<arr[i]<<" and "<<arr[j];
    //             cout<<endl;
    //         }
    //     }
    // }
    return 0;
}
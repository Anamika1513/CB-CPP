#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n ; i++){
        cin>>arr[i];
    }
    int srch;
    cin>>srch;

    for(int i=0 ; i<n ; i++){
        if(arr[i]==srch)
            cout<<i;
    }
    
    return 0;
}
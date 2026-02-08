#include <iostream>
using namespace std;

int main(){
    int i , a=2 , b=3;
    int arr[2+3];
    for(i=0 ; i<a+b ; i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    //no mistakes in this code


    // int size ;
    // cin>>size;
    // int arr[size];

    // for(i=1 ; i<=size ;i++){    // variable i is used without define
    //     cin>>arr[i];
    //     cout<<arr[i];
    // }

    int size ;
    cin>>size;
    int arr[size];

    for(int i=1 ; i<=size ;i++){    // variable i is used without define
        cin>>arr[i];
        cout<<arr[i];
    }
    return 0;
}
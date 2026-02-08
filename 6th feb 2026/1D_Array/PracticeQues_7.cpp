/* Wap to copy element of array to another array in reverse array */

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    int brr[5];

    for(int i=0 ; i<5 ; i++){
        brr[i]=arr[4-i];
    }

    /*
    //after coping in reverse order
    for(int i=0 ; i<5 ; i++){
        cout<<brr[i]<<" ";
    } */

    // or we can use this also
     for(int i=0 ; i<5 ; i++){
        arr[i]=brr[i];
    }
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
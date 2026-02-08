#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,67,5,4};
    int multi = 1;

    for(int i=0 ; i<5 ; i++){
        multi*=arr[i];
    }
    cout<<"Product of a given array : "<<multi;

    return 0 ;
}
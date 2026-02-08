/* Given an array and num 'x' find out if 'x' lies in the array or not , if yes then print the index  */

#include <iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    for(int i=0 ; i<7 ; i++){
        if(arr[i]==4){
            cout<<"X is present in the array and ts index is : "<<i;
            break;
        }
    }

    return 0;
}
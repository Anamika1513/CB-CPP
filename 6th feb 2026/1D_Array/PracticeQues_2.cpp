/* Count the number of elements in given array greater then a given no x */

#include <iostream>
using namespace std;

int main(){
    int arr[7] ={1,2,3,4,5,6,7};
    int n;
    cin>>n;
    int count =0;

    for(int i=0 ; i<7 ;i++){
        if(i>n){
            cout<<arr[i]<<" ";
            count++;
        }
    }
    cout<<"count : "<<count;

    return 0;
}
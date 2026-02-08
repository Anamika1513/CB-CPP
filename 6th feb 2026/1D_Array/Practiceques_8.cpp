/* reverse the array without using extra array */

#include <iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int i=0 , j=5;

    cout<<"Original array"<<endl;
    for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    while(i<j){
        // i = i+j;
        // j = i-j;
        // i = i-j;

        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"After raverse"<<endl;
    for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
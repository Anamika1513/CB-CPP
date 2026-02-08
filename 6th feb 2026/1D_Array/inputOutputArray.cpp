#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {1,2,3,4,5};

    //print array
    for(int i=0 ; i<5 ; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    int arr2[5];

    //input and output the elements of arr
    for(int i=0 ; i<5 ; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr2[i];
    }

    for(int i=0 ; i<5 ; i++){
        cout<<i+1<<" element is : ";
        cout<<arr2[i]<<endl;
    }
    cout<<endl;


    return 0;
}
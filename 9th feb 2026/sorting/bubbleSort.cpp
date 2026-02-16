#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,7,3,45,67,23,22};
    int n = sizeof(arr);

    cout<<"original array"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0 ; i<n ; i++){
        int min = arr[0];
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[i]){
                min = arr[j];
            }
        }
        
        int temp = arr[i];
        arr[i] = min;
        min = temp;
    }

    cout<<"Sorted array"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
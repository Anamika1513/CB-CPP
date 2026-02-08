/* Rotate the given array 'a' by k steps , where k is non negative 
Note : k can be greater than n as well where n is the size of array 'a' */

#include <iostream>
using namespace std;

void reverse(int arr[],int i , int j){
     while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int n ;
    cout<<" Enter the size of an array : " ;
    cin>>n;

    int arr[n];
    cout<<"Enter the elemments of array "<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter how many times rotation will happens : ";
    cin>>k;

    //if k>n
    k = k % n;

    reverse(arr , 0 , n-1);
    reverse(arr , 0 , k-1);
    reverse(arr , k , n-1);

    cout<<"Raotated array"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
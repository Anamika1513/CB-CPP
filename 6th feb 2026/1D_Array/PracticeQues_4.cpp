/* Find the total no of pairs in the array whose sum is equal to the given value */

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n] , count = 0 , x;
    cout<<"Enter a no : ";
    cin>>x;

    cout<<"Enter the elements of array "<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
     
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count++;
            }
        }
    }

    cout<<"total count of pairs whose sum is equal to x is : "<<count;

    return 0;
}
/* Find the total no of triplets whose sum add upto x */

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
            for(int k=j+1 ; k<n ; k++){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==x){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
                    count++;
                }
            }
        }
    }

    cout<<"total count of triplets whose sum is equal to x is : "<<count;

    return 0;
}
/* WAP to find the duplicate element in an array iof integers */

#include <iostream>
using namespace std;

int main(){
    int arr[7]={12,34,56,67,56,45,89};

    for (int i=0 ; i<7 ; i++){
        for(int j=i+1 ; j<7 ; j++){
            if(arr[i] == arr[j]){
                cout<<arr[j]<<" is the duplicate element the given array"<<endl;
                break;
            }
        }
    }


    return 0;
}
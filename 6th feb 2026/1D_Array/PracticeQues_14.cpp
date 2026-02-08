/* find the unique no in a given array where all the elements are being repeated twice with one value being unique */

#include <iostream>
using namespace std ;

int main(){
    int arr[7] = {1,2,3,4,3,2,1};

    for(int i=0 ; i<7 ; i++){
         bool flag = false;
        for(int j=i+1 ; j<7 ; j++){
            if(arr[i]==arr[j]){
                flag =true;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" unique value in array";
            break;
        }
    }

    return 0;
}
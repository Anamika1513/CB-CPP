/* Find the second largest elements in array */

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int max = INT_MIN;
    int smax = INT_MIN; 
    for(int i=1 ; i<8 ; i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>smax){
            smax = arr[i];
        }
    }

    if(smax ==INT_MIN){
        cout<<"No second largest element exits ";     //when all elements of array exits same value
        return -1;
    }
    cout<<"second Max of an array : "<<smax;

    return 0;
}
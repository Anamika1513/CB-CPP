#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int max = arr[0];

    for(int i=0 ; i<8 ; i++){
        if(max<arr[i])
            max = arr[i];
    }
    cout<<"Max of an array : "<<max;


}
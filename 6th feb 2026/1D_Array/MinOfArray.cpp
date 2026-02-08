#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int min = arr[0];

    for(int i=1 ; i<=8 ; i++){
        if(min>arr[i])
            min = arr[i];
    }
    cout<<"Max of an array : "<<min;


}
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};   //5 boxes created (arr declaration with initialization)
    
    cout<<arr[3]<<" ";    //accesss the value of index at a prticular index(0 to n-1)

    arr[3] = 40;   // updation of value in array
    cout<<arr[3]<<" ";

    float a[3]={1.1 , 1.2 , 1.3 };
    cout<<a[1]<<" ";

    char b[3] = {'a','b','c'};
    cout<<b[0]<<" ";


    int c[5];
    c[0] = 1;
    c[1] = 2;
    c[2] = 3;
    c[3] = 4;
    c[4] = 5;

    cout<<c[4]<<" ";



    return 0;
}
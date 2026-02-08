/* Given an array of integers , change the value of odd
indexed elements to its second multiple and increment all
even indexed value by 10 */

#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int multi=1;

    cout<<"Original Array"<<endl;
    for(int i=0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0 ; i<8 ; i++){
        if(i%2!=0)
            arr[i]*=2;
        else
            arr[i]+=10;
    }

    cout<<"Array after changes"<<endl;
    for(int i=0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
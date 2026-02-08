#include <iostream>
using namespace std;

int main(){
    int n , i;
    cout<<"Enter the you wanna check : ";
    cin>>n;

    for(i=2 ; i<n ; i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime";
    }

    return 0 ;
}
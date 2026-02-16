#include <iostream>
using namespace std;

int main(){
    int decimal , binary =0 , place=1;
    cout<<"Enter the decimal no. : ";
    cin>>decimal;

    while(decimal>0){
        int x=decimal%2;
        binary += x*place;
        decimal/=2;
    }
    cout<<"Binary : "<<binary;
}
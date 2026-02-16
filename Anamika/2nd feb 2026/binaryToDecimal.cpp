#include <iostream>
using namespace std;

int main(){
    int binary , decimal = 0 , base = 1;
    cout<<"Enter binary no : ";
    cin>>binary;

    while(binary>0){
        int x = binary%10;   // return last digit
        decimal = decimal + x*base;
        base = base*2;
        binary /= 10;
    }
    cout<<"Binary to decimal : "<<decimal;

    return 0;
}
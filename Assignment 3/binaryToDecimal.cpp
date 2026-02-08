#include <iostream>
using namespace std;

int main(){
    int binary , decimal=0 , base=1;
    cout<<"Enter the binary no : ";
    cin>>binary;

    while(binary>0){
        int x = binary%10;
        decimal = decimal + x*base;
        base*=2;
        binary/=10;
    }
    cout<<"Binary to decimal conversion : "<<decimal;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a = 512;

    int temp = 0;
    while(a>0){
        int mod = a%10;
        a = a/10;
        temp *= 10;
        temp = temp + mod;
    }
    cout<<temp;

    return 0;
}

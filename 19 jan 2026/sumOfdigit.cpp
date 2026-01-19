#include <iostream>
using namespace std;

int main(){
    int a = 512;
    int temp;
    int sum = 0;

    for(int i = a ; i>=0; i-- ){
        int mod = a%10;
        sum = sum + mod;
        a = a/10;
    }
    cout<<sum;

    return 0;
}

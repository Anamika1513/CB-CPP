#include <iostream>
using namespace std;

int main(){
    int a = 7;
    int multi = 1;

    for(int i = 1 ; i<=10 ; i++){
        multi = i * a;
        cout << a <<" * "<<i <<" = "<<multi << endl;
    }

    return 0;
    
}

#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 6;
    int c = 15;


    if(a>b && a>c){
        cout<<"a is greater among them";
    }

    else if(b>a && b>c){
        cout<<"b is graeter among them";
    }

    else{
        cout<<"c is greater among them";
    }
    
    return 0;
}

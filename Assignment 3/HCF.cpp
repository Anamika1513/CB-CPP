#include <iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter two no : ";
    cin>>a>>b;
    int x=a<b?a:b;

    for(int i=x;i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<"HCF : "<<i;
            break;
        }
    }

    return 0;
}
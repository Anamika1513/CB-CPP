#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int oddSum = 0 , evenSum = 0 ,pos=1;

    while(n>0){
        int x=n%10;

        if(pos%2==0){
            oddSum+=x;
        }
        else{
            evenSum+=x;
        }
        n/=10;
        pos++;
    }
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;

    return 0;
}
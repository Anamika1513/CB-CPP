#include <iostream>
using namespace std;

int main(){
    int n , a=0 , b=1 ,c , sum =0;
    cout<<"Enter the no of terms : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1 ; i<=n ; i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
        sum+=c;
    }
    cout<<endl;
    cout<<"Sum of n no of fibonacci series : "<<sum;

    return 0;
}
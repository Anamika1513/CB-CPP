#include <iostream>
using namespace std;

int main(){
    int n , n1 , count=0 ;
    cin>>n>>n1;

    while(n>0){
        int x = n%10;
		if(x==n1)
        	count++;
		n/=10;
    }
    cout<<count;

    return 0;
}
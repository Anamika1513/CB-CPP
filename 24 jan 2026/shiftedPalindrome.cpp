#include <iostream>
using namespace std;

int main(){
    int n , num=1;
    cout<<"Enter the no of rows : ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        for(int j=n ; j>i ; j--){
            cout<<"  ";
        }
        num = i;
        for(int k=1 ; k<=i ; k++){
            cout<<num<<" ";
            num++;
        }
        
        num=2*i-2;
        for(int s=1;s<i ;s++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    
    return 0;
}
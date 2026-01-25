#include <iostream>
using namespace std;

int main(){
    int n,num;
    cout<<"Enter no of rows : ";
    cin>>n;

    for(int i=1 ; i<=n ;i++){
        num=n;
        for(int j=n ; j>=1 ; j--){
            if(j==i){
                cout<<"* ";
            }
            else{
                cout<<num<<"  ";
                num--;
            }
        }
        cout<<endl;
    }

    return 0;
}
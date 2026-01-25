#include <iostream>
using namespace std;

int main(){
    int n ,num;
    cout<<"Enter the no of rows : ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        num = n;
        for(int j=1 ; j<=n ; j++){
            cout<<num<<"  ";
            num--;
        }
        cout<<endl;
    }

    return 0;
}
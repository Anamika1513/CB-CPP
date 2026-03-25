#include <iostream>
using namespace std;

int main(){
    int n , m;
    cout<<"Enter the no of rows : ";
    cin>>n;
    cout<<"Enter the no of columns : ";
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Original Array"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Wave Printing"<<endl;
    for(int j=0 ; j<m ; j++){
        if(j%2==0){
            for(int i=n-1 ; i>=0 ; i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0 ;i<n ;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
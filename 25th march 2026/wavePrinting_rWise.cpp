#include <iostream>
using namespace std;

int main(){
    int n , m;
    cout<<"Enter the no of rows : ";
    cin>>n;
    cout<<"Enter the no of columns : ";
    cin>>m;

    int arr[n][m];
    cout<<"Input the elements of matrix"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"print original matrix"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"wave printing of matrix"<<endl;
    for(int i=0 ; i<n ; i++){
        if(i%2!=0){
                for(int j=m-1 ; j>=0 ; j--){
                    cout<<arr[i][j]<<" ";
                }
            }
        else{
            for(int j=0 ; j<m ; j++){
            cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}
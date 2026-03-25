#include <iostream>
using namespace std;

int main(){
    int n , m , c;
    cout<<"Enter the no of rows : ";
    cin>>n;
    cout<<"Enter the no of columns of a / rows of b : ";
    cin>>m;
    cout<<"Enter the no of column for matrix b : ";
    cin>>c;



    int arr[n][m];
    int brr[m][c];
    int res[n][c];

    //matrix A
    cout<<"Input of matrix 1st"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }

    //matrix B
    cout<<"Input of matrix 2nd"<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<c ; j++){
            cin>>brr[i][j];
        }
    }

    //multiplication
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<c ; j++){
           res[i][j]=0;
            // ith row of matrix A and jth column of matrix B
            //a[i][0],a[i][1],a[i][2]  * b[0][j],b[1][j],b[2][j]
           for(int k=0 ; k<m ; k++){
            res[i][j] = res[i][j] + arr[i][k]*brr[k][j];
           }
        }
    }


    // print matrix multication
    cout<<"Multiply of two matrix"<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<c ; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int m , n ;
    cout<<"Enter the noo of rows : ";
    cin>>m;
    cout<<"Enter the no of columns : ";
    cin>>n;

    int a[m][n];
    cout<<"Enter the no of elements" << endl;
    for(int i=0 ; i<m ;i++){
        for(int j=0 ; j<n ;j++){
            cin>>a[i][j];
        }
    }

    int minr=0;
    int maxr = m-1;
    int minc = 0 ;
    int maxc = n-1;

    int tne = m*n ;
    int count = 0 ;

    while(count<tne){
        //print minimum row
        for(int j=minc ; j<=maxc ; j++){
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        if(count>=tne) break;

        //print maximum column 
        for(int i=minr ; i<=maxr; i++){
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        if(count>=tne) break;


        //print maximum row
        for(int j=maxc ; j>=minc ;j--){
            cout<<a[maxr][j]<<" ";
            count++;
        }
        maxr--;
        if(count>=tne) break;

        //print minimum column 
        for(int i=maxr ; i>=minr ; i--){
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
        if(count>=tne) break;

    }

    return 0;
}
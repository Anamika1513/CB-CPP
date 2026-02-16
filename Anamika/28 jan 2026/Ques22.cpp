#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;

    for (int i=1 ; i<=n ; i++){
        for(int j=n ; j>=i ; j--){
            if(){
            cout<<"* "; 
            }
        }
        
        for(int k=1 ; k<i ; k++){
            cout<<"  ";
        } 

        
        for(int s=n; s>=i ; s--){
            cout<<"* ";  
        }
       
        cout<<endl;
    }

    return 0;
}
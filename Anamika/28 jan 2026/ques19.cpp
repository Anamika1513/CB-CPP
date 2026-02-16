#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;

    for (int i=1 ; i<=n ; i++){
        for(int j=n ; j>=i ; j--){
            if(i!=n){
            cout<<"* ";  } 
        }
        
        for(int k=1 ; k<i ; k++){
            cout<<"    ";
        } 
        
        for(int s=n; s>=i ; s--){
            if(n!=i){
            cout<<"* "; } 
        }
       
        cout<<endl;
    }

    for (int i=1 ; i<=n ; i++){
       
        for(int j=1 ; j<=i ; j++){
            if(i!=n){
            cout<<"* "; 
            }
        }
        
        for(int k=n ; k>i ; k--){
            cout<<"    ";
        } 
        
        for(int s = 1; s<=i; s++){
            cout << "* ";
        }
         
        cout<<endl;
    }


    return 0;
}
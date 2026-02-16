#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;

    for (int i=1 ; i<=n ; i++){
        if(i!=n){
        for(int j=n ; j>i ; j--){
            cout<<"* ";
        }
        }
        
        for(int k=1 ; k<=i ; k++){
            cout<<"    ";
        } 
        if(i!=n){
        for(int s=n; s>i ; s--){
            cout<<"* ";
        }
        }

        cout<<endl;
    }

  
    for (int i=1 ; i<=n ; i++){
            if(i!=n){
            for(int j=1 ; j<=i ; j++){
                cout<<"* ";
            }
            }
            
            for(int k=n ; k>i ; k--){
                cout<<"    ";
            } 

            if(i != n){
                for(int s = 1; s <= i; s++){
                    cout << "* ";
                }
            }
            
            cout<<endl;
    }


    return 0;
}
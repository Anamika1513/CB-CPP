#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

/*      for(int i=1 ; i>0 ; i++){           // i<=a*b
            if(i%a==0 && i%b==0){
                cout<<"LCM : "<<i;
                break;
            }
        }
*/    
    /*  int x = a>b?a:b;
        for(int i=x ; i<=a*b ; i++){           
            if(i%a==0 && i%b==0){
                cout<<"LCM : "<<i;
                break;
            }
        }*/

        int x = a>b?a:b;
        for(int i=x ; i<=a*b ; i+=x){           
            if(i%a==0 && i%b==0){
                cout<<"LCM : "<<i;
                break;
            }
        }


    return 0;
}
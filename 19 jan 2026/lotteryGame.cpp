#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no : ";
    cin>> n;

    if (n >= 300 && n <= 460){
        cout<<"the prize is MacBook.";
    }
    else if( n >= 200 && n <= 280 ){
        cout<<"the prize is Kurkure.";
    }
    else if(n >= 1100 && n <= 1500){
        cout<<" the prize is Cycle.";
    }
    else if (n > 50 && n <= 80){
        cout<<"the prize is Bike.";
    }
    else{
        cout<<"Better luck next time.";
    }

    return 0;
}

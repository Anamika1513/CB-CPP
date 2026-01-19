#include <iostream>
using namespace std;

int main(){
    int marks ; 
    cout<<"Enter the marks of student : ";
    cin>>marks;

    if (marks > 90){
        cout<<"having A grades";
    }
    else if(marks<90 && marks>70){
        cout<<"having B grades";
    }

    else{
        cout<<"having C gardes";
    }

    return 0;
}

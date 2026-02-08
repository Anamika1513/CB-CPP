#include <iostream>
using namespace std;

int main(){
    int marks[10];

    cout<<"Enter the marks of students : " ;
    for(int i=0 ; i<10 ; i++){
        cin>>marks[i];
    }

    //print rollno (index)..if marks is less than 35

    for(int i=0 ; i<10 ; i++){
        if(marks[i]<35)
            cout<<i<<" ";
    }

    return 0;
}
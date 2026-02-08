#include <iostream>
using namespace std;

int main(){
    int num , remainder , revNum = 0;
    cout<<"Enter the no : ";
    cin>>num;

    while(num>0){
        remainder = num%10;
        revNum = (revNum*10)+remainder;
        num/=10;
    }
    cout<<"Reverse of given no is : "<<revNum;

    return 0;
}
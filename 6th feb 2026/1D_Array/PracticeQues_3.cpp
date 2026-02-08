/* Find the difference between the sum of elemnts at even indices to the
sum of elemens at odd indices */

#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};

    int evenSum=0 , oddSum=0;

    for(int i=0 ; i<9 ; i++){
        if(i%2==0)
            evenSum+=arr[i];
        else
            oddSum+=arr[i];
    }

    cout<<"even indices elements sum : "<<evenSum<<endl;
    cout<<"Odd indicesn elements sum : "<<oddSum<<endl;

    cout<<"Difference of even indices elements to the odd indices elemets : "<<evenSum-oddSum;

    return 0;
    
}
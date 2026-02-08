/* Given an arr containing element from 1 to 100 except on element in this range
is missing . Find the missing element . */

#include <iostream>
using namespace std;

int main(){
    int n=100;
    int sum1 = n * (n + 1) / 2 , sum2 = 0;
    int x;
    cout<<"missing no : ";
    cin>>x;

    cout<<"Sum of 100 consecutive natural no : "<<sum1<<endl;

    for(int i=1 ;i<=n ; i++){
        if(i==x)
            continue;
        sum2+=i;
    }
    cout<<"Sum of 100 consecutive natural no when a no is missing : "<<sum2<<endl;

    cout<<"the missing no is : "<<sum1-sum2;

    return 0;

}
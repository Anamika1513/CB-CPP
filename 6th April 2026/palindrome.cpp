#include <iostream>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int num;
    cin>>num;
    int num1 = num;
    int rev = 0;

    while(num>0){
        int x = num%10;
        rev  = rev*10 + x;
        num/=10;
    }

    if(rev==num1) cout<<"Palindrome";
    else cout<<"Not Palindrome";


    // string x = to_string(num);

    // string rev = x;

    // reverse(x.begin(), x.end());
    // if(x==rev) cout<<"Palindrom";
    // else cout<<"Not Palindrome";

    return 0;
}

/* if an array contains n elements , then check if given array is palindrome or not */

#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,1,1};
    int i=0 , j=4;
    bool isPalindrome = true;

    cout<<"Original array"<<endl;
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout<<"Array is palindrome";
    else
        cout<<"Array is not palindrome";

    return 0;
}
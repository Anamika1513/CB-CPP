/* Take the following as input.
A numve integer of n digits is called an Armstrong number of order n (order is number of digits) if.
abcd…ber
Write a function which returns true if the 
number is an armstrong number and false otherwise, where Armstrong number is defined as follows.
A positi = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….
1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4
371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3 */

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n;
    int count = 0;

    while (temp > 0) {
        temp /= 10;
        count++;
    }

    temp = n;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}

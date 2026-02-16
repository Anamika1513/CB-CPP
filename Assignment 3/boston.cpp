/* A Boston number is a composite number, the sum of whose 
digits is the sum of the digits of its prime factors obtained as a
result of prime factorization (excluding 1 ). The first few such 
numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 
378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7.
Write a program to check whether a given integer is a Boston number. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n, sum1 = 0, sum2 = 0;

    while (temp > 0) {
        sum1 += temp % 10;
        temp /= 10;
    }

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            int x = i;
            while (x > 0) {
                sum2 += x % 10;
                x /= 10;
            }
            n /= i;
        }
    }

    if (sum1 == sum2)
        cout << 1;
    else
        cout << 0;

    return 0;
}

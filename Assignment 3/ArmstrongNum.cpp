#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0, c = n, armSum = 0;

    while (n > 0) {
        n /= 10;
        count++;
    }

    while (c > 0) {
        int x = c % 10;
        int power = 1;

        for (int i = 1; i <= count; i++) {
            power *= x;
        }

        armSum += power;
        c /= 10;
    }

    cout << armSum;
    return 0;
}

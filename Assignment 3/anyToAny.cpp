/* Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned. */

#include <iostream>
using namespace std;

int main() {
    int sb, db, sn;
    cin >> sb >> db >> sn;

    int decimal = 0;
    int power = 1;

    while (sn > 0) {
        int digit = sn % 10;
        decimal += digit * power;
        power *= sb;
        sn /= 10;
    }

    int result = 0;
    power = 1;

    while (decimal > 0) {
        int rem = decimal % db;
        result += rem * power;
        power *= 10;
        decimal /= db;
    }

    cout << result;
    return 0;
}

#include <iostream>
using namespace std ;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';
        cout<<digit<<endl;
    }

    return 0;
}
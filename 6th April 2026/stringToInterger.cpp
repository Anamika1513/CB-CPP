#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(){
    string s;
    getline(cin , s);

    int i = 0, n = s.size(), sign = 1;
    long result = 0;

    while (i < n && s[i] == ' ') i++;

    if (i < n && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while(i<n && isdigit(s[i])){
        int digit = s[i]-'0';
        if(result>(LONG_MAX-digit)/10){
            if (sign == 1) cout << INT_MAX << endl;
            else cout << INT_MIN << endl;
            return 0;
        }
        result = result * 10 + digit;
        i++;
    }
    cout << sign * result << endl;
    return 0;
}
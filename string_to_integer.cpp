#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

int myAtoi(string s) {
    int i = 0;
    int sign = 1;
    long long result = 0;

    // 1. Skip leading spaces
    while (i < s.length() && s[i] == ' ') {
        i++;
    }

    // 2. Check sign
    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // 3. Convert digits into integer
    while (i < s.length() && isdigit(s[i])) {
        int digit = s[i] - '0';

        result = result * 10 + digit;

        // 4. Handle integer overflow
        if (sign == 1 && result > INT_MAX) {
            return INT_MAX;
        }

        if (sign == -1 && -result < INT_MIN) {
            return INT_MIN;
        }

        i++;
    }

    return result * sign;
}

int main() {
    string s;

    getline(cin, s);

    cout << myAtoi(s);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// Function to multiply two large integers
string multiply(string x, string y) {
    int n = x.length();
    int m = y.length();
    string res(n + m, '0');

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int prod = (x[i] - '0') * (y[j] - '0');
            int sum = prod + (res[i + j + 1] - '0');
            res[i + j + 1] = (sum % 10) + '0';
            res[i + j] += sum / 10;
        }
    }

    // Remove leading zeros
    while (res[0] == '0') {5
        res = res.substr(1);
    }

    // If result is empty, return 0
    if (res.empty()) {
        res = "0";
    }

    return res;
}

int main() {
    string num1, num2;
    cout << "Enter the first large integer: ";
    cin >> num1;
    cout << "Enter the second large integer: ";
    cin >> num2;
    cout << "Product of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;
    return 0;
}
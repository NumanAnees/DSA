#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int number, result;

    cout << "Enter a non-negative number: ";
    cin >> number;

    result = factorial(number);
    cout << "Factorial of " << number << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

#include <iostream>
using namespace std;

//fib(n)=fib(n−1)+fib(n−2)
long fib_naive(int n) {
    if (n <= 1) return n;
    return fib_naive(n-1) + fib_naive(n-2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fib_naive(n) << endl;
    return 0;
}

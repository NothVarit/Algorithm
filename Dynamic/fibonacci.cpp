#include <iostream>

using namespace std;

int n, f;

int fibo(int n) {
    if (n == 0 || n == 1) return n;
    int f1 = 0;
    int f2 = 1;
    
    for (int i = 1; i < n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main() {
    cin >> n;
    int ans = fibo(n);
    cout << f;
}
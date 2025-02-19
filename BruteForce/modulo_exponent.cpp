#include <iostream>
#include <vector>

using namespace std;
long x, n, k;
long cal(int x1, int x2, int k) {
    return (x1*x2)%k;
}

long rec(int x, int n, int k) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        long x2 = rec(x, n/2, k);
        return cal(x2, x2, k);
    } else {
        return cal(rec(x,n-1,k), x,k);
    }
}

int main() {
    cin >> x >> n >> k;

    cout << rec(x,n,k); 
}
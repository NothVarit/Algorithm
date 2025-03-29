#include <iostream>

using namespace std;

int n, k;
int table[33][33];

int bino(int n, int k) {
    if (n == k || k == 0) return 1;
    
    for (int i = 0; i < n; i++) {
        table[i][0] = 1;
        table[i][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            table[i][j] = table[i-1][j-1] + table[i-1][j];
        }
    }

    return table[n][k];
}

int main() {
    cin >> n >> k;
    int ans = bino(n, k);
    cout << ans;
}
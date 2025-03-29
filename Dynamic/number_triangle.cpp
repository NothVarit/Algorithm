#include <iostream>

using namespace std;

int main() {
    int n, ans;
    int table[1000][1000];
    cin >> n >> table[0][0];
    ans = table[0][0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> table[i][j];
            if (j) {
                table[i][j] += max(table[i-1][j], table[i-1][j-1]);
            } else {
                table[i][j] += table[i-1][j];
            }
            if (i == n-1) ans = max(ans, table[i][j]);
        }
    }
    cout << ans;
    
}
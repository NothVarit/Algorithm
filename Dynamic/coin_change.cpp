#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    vector<int> coins;
    cin >> n >> m;
    coins.resize(n);
    int M[m];

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());

    for (int i = 0; i < m; i++) {
        M[i] = 9999999;
    }
    M[0] = 0;

    for (int i = 1; i <= m; i++) {
        for (auto &coin : coins) {
            if (i - coin < 0) break;
            M[i] = min(M[i], 1 + M[i - coin]);
        }
    }

    cout << M[m];

}
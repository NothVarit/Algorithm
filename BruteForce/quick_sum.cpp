#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int table[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> table[i][j];
        }
    }
    int x1, x2, y1, y2;
    for (int i = 0; i < k; i++) {
        int sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j <= x2; j++) {
            for (int z = y1; z <= y2; z++) {
                sum += table[j][z];
            }
        }
        cout << sum << endl;
    }
}
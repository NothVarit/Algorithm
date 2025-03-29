#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int table[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }
    int max = table[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                int x = i + k;
                int y = j + k;
                if (x >= n || y >= n) break;
                sum += table[x][y];
                if (sum > max) max = sum;
            }
        }
    }

    cout << max;
}
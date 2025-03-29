#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> c(n+1, vector<int>(k+1,0)); 

    for (int i = 1; i <= n; i++) {
        c[i][1] = 1;
        for (int j = 2; j <= min(i,k); j++) {
            c[i][j] = (c[i-1][j-1] + j * c[i-1][j]) % 1997;
        }
    }

    cout << c[n][k];
}
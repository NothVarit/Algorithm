#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int dp[100005], a[20];
    dp[0] = 1;
    for (int i = 1; i <= k ; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if(a[j] <= i) dp[i] = (dp[i] + dp[i - a[j]]) % 1000003;
        }
    }
    cout << dp[n];

}
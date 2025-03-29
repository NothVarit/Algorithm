#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    long ans, sum;
    ans = -10000007;
    cin >> n;
    while(n--) {
        cin >> m;
        sum += m;
        ans = max(ans,sum);
        if (sum < 0) sum = 0;
    }

    cout << ans;
}
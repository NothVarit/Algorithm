#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

using pii = pair<int,int>;

int main() {
    int n, x, y;
    cin >> n;
    pii p[n];
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }

    sort(p, p+n, [](pii a, pii b) {
        return (a.first != b.first ? a.first > b.first : a.second > b.second);
    });

    int mx = numeric_limits<int>::min();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i].second > mx) {
            mx = p[i].second;
            ++ans;
        }
    }

    cout << ans << endl;
}
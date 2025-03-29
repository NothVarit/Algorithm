#include <iostream>
#include <map>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    int sum = 0;
    int ans = numeric_limits<int>::min();
    map<int,int> m;

    while(n--) {
        cin >> x;
        ans = max(x,ans);
        if (m.find(x) != m.end()) {
            ans = max(ans, sum + x - m[x]);
            m[x] = min(sum,m[x]);
        } else {
            m[x] = sum;
        }
        sum += x;
    }
    cout << ans << endl;
}
#include <iostream>
#include <vector>

using namespace std;

int n, m, x;
vector<int> v;

int main() {
    cin >> n >> m;
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while(m--) {
        cin >> x;
        if (x < v[0]) {
            cout << "-1\n";
            continue;
        }
        int low = 0, high = n-1, mid, ans; 
        while(low <= high) {
            mid = (low+high) >> 1;
            if (v[mid] <= x) {
                ans = mid, low = mid+1;
            } else {
                high = mid-1;
            }
        }
        cout << ans << "\n";
                 
    }
}
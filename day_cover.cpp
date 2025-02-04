#include <iostream>
#include <vector>

using namespace std;

int n, m, k, day;
vector<int> v[29];
int vv[1009];
int ans = INT_MAX;

void sol(int now, int cnt, int cst) {
    if (n == cnt) {
        ans = cst;
        return;
    }

    if (now == m) return;
    

    for (auto x : v[now]) {
        if (vv[x] == 0) {
            cnt++;
        }
        vv[x]++;    
    }

    sol(now + 1, cnt, cst + 1);

    for (auto x : v[now]) {
        vv[x]--;
        if (vv[x] == 0) {
            cnt--;
        }
    }

    sol(now + 1, cnt, cst);
}

int main() {
    cin >> n >> m;
    bool check[m];
    for (int i = 0; i < m; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    sol(0,0,0);
    cout << ans;
}
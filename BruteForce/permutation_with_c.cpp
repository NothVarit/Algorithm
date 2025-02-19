#include <iostream>
#include <vector>

using namespace std;
int n,m,a,b;
vector<bool> used;
vector<int> before;
vector<int> v;


void perm(int step) {
    if (step == n) {
        for (auto &x : v) {
            cout << x << " ";
        }
        cout << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            if (!used[i] && (before[i] == -1 || used[before[i]])) {
                v[step] = i;
                used[i] = true;
                perm(step+1);
                used[i] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> n >> m;
    before = vector<int>(n,-1);
    used.resize(n);
    v.resize(n);

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        before[b] = a;
    }

    perm(0);
}
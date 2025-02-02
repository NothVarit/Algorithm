#include <iostream>
#include <vector>

using namespace std;

int n, a;

int main() {
    cin >> n >> a;
    int v[n];
    int t = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while(a) {
        for (auto &x : v) {
            if (x == 0 || (a&&t % x == 0)) {
                cout << t << "\n";
                a--;
            }
        }
        t++;
    }
}
#include <iostream>
#include <vector>

using namespace std;
vector<int> v;
int n, m, x;

int binarySearch(int x) {
    int low = -1;
    int hi = n-1;
    while(low < hi) {
        int mid = (low + hi + 1)/2;
        if (x >= v[mid]) low = mid;
        else hi = mid - 1;
    }
    return hi;
}

int main() {    
    cin >> n >> m;
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while(m--) {
        cin >> x;
        int ans = binarySearch(x);
        if (ans == -1) cout << "-1\n";
        else cout << v[ans] << "\n";
    }    

}
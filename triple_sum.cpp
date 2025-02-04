#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, order;
    vector<int> v;
    cin >> n >> m;

    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> order;
        bool result = false;
        if (order < v[0] + v[1] + v[2] || order > v[n-1] + v[n-2] + v[n-3]) result = false;

        for (int j = 1; j < n-1 && !result; j++) {
            int start = 0;
            int end = n-1;
            
            while(!result) {
                if (start == j || j == end) break;
                if (order == v[start] + v[j] + v[end]) result = true;
                if (order > v[start] + v[j] + v[end]) start++;
                if (order < v[start] + v[j] + v[end]) end--;
            }
        }
        cout << (result ? "YES\n" : "NO\n");
    }
}
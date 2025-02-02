#include <iostream>
#include <map>

using namespace std;

int n, a, b;
map<int,int> m;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        m[a] = max(m[a], b);
    }

    int st = m.begin()->first;
    int end = m.begin()->second;

    for (auto &it : m){
        if (end + 1 < it.first) {
            cout << st <<  " " << end << " ";
            st = it.first;
            end = it.second;
        } else {
            end = max(it.second, end);  
        }

    }
    cout << st << " " << end;

}
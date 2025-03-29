#include <iostream>
#include <vector>

using namespace std;

vector<int> f;
int n, ans = 0;

int findMost(vector<int> &f, int begin, int end) {
    if (begin != end+1) {
        int b1 = f[begin];
        int b2 = f[begin+1];
        int e1 = f[end];
        int e2 = f[end-1];
        int m = max(max(b1, b2), max(e1, e2));
        if (m == b1) {
            int secM = max(b2,max(e1,e2));
            if (secM == b2) {
                ans += b1;
                end--;
                begin++;
            }
        }
    }
}

int main() {
    cin >> n;
    f.resize(n-1);
    int begin = 0;
    int end = n-1;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

}
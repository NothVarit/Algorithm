#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char a[1 << 9];
int n, k;

bool check(int begin, int target) {
    if (begin > target) {
        swap(begin,target);
        reverse(a + begin, a + target + 1);
    }
    if (begin + 1 == target) return (a[begin] == 0 && a[target] == 1);
    int mid = (begin + target) >> 1;
    if (!check(mid+1, target)) return false;
    return check(begin, mid) || check(mid, begin);
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 1 << k; j++) {
            cin >> a[j];
        }
        cout << (check(1, 1 << k) ? "yes\n" : "no\n");
    }

}
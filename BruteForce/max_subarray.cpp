#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (i%2 == 0) {
            a = max(a + m, m);
        } else {
                a = a-m;
        }
        if (i%2 != 0) {
            b = max(b+m,m);
        } else if (i%2 == 0 && i != 0) {
            b = b-m;
        }
        c = max(a,b);
        sum = max(c,sum);
    }
    cout << sum;
}
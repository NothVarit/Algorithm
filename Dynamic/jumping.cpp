#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n], b[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    b[0] = v[0];
    b[1] = v[0] + v[1];
    b[2] = max(v[0] + v[1] + v[2], v[0] + v[2]);

    for (int i = 3; i < n; i++) {
        int temp1 = b[i-1] + v[i];
        int temp2 = b[i-2] + v[i];
        int temp3 = b[i-3] + v[i];
        b[i] = max(max(temp1,temp2),temp3);
    } 

    cout << b[n-1];
}
#include <iostream>
#include <vector>

using namespace std;

int n, k;
char a[25];

void perm(int state, int num) {
    if (state == n) {
        if (!num) { 
            cout << a << endl;
            
        }
        return;
    }

    a[state] = '0';
    perm(state+1, num);

    if (num) {
        a[state] = '1';
        perm(state+1, num-1);
    }

}

int main() {
    
    cin >> k >> n;
    perm(0, k);

}
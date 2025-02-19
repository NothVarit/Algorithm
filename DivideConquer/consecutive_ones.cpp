#include <iostream>
#include <vector>

using namespace std;

int n, k;

void perm(int len, int z, vector<int> &sol) {
    if (len < z) {
        sol[len] = 0;
        perm(len+1, z, sol);
        sol[len] = 1;
        perm(len+1, z, sol);
    } else {
        int count = 0;
        for (int i = 0; i < z;i++) {
            if (sol[i] == 1) {
                count+=1;
            } else {
                count = 0;
            }
            if (count >= k) {
                break;
            }
        }
        if (count >= k) {
            for (int j = 0; j < z; j++) {
                cout << sol[j];
            }
            cout << endl;
        } 
    }
}

int main() {
    pair<int,char> answer;

    cin >> n >> k;
    vector<int> sol(n);
    perm(0, n, sol);


}
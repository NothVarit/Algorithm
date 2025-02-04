#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int coun;

int main() {
    int n;
    cin >> n;
    v.resize(n);
    for (int i = 0; i< n; i++) {
        cin >> v[i];
    }
    coun = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < v.size(); j++) {
            if (v[i] > v[j]) coun++;
        }
    }
    cout << coun;
    
}
#include <iostream>
#include <vector>

using namespace std;

int n,m,k,w,m,a,b,c;
vector<int> p,h,t;

void brute(int state) {
    if (state == k) {

    } else {
        
    }
}

int main() {
    cin >> n >> m >> k >> w;
    
    p.resize(m);
    h.resize(m);
    t.resize(k);

    int ans = 0;
    for (int i = 0; i < m; i++) { cin >> p[i]; }
    for (int i = 0; i < m; i++) { cin >> h[i]; ans += h[i]; }
    for (int i = 0; i < k; i++) { cin >> t[i]; }

    brute(0);


    
}
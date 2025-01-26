#include <iostream>
#include <vector>

using namespace std;

vector<string> answer;
int n;

void perm(string s, int a, int b, int c) {
    if (s.size() == n) {
        answer.push_back(s);
        return;
    }

    if (a > 0) {
        perm(s + "A", a-1, b, c);
    }
    if (b > 0) {
        perm(s + "B", a, b-1, c);
    }
    if (c > 0) {
        perm(s + "C", a, b, c-1);
    }
}

int main(){
    int a, b, c;
    cin >> n >> a >> b >> c;
    perm("", a, b, c);
    cout << answer.size() << '\n';
    for (auto &x : answer) {
        cout << x << "\n";
    }
    return 0;

}

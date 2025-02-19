#include <iostream>
#include <vector>

using namespace std;

int row, col;
vector<vector<int>> grid;

void perm(int r, int c, vector<char> path, int n) {
    if (r == row-1 && c == col-1) {
        for (int i = 0; i < n; i++) {
            cout << path[i];
        }
        cout << endl;
    } else {
        grid[r][c] = 2;
        if (grid[r][c+1] == 0 && c < col-1) {
            path[n] = 'A';
            perm(r, c+1, path, n+1);
            grid[r][c+1] = 0;
        }

        if (grid[r+1][c] == 0 && r < row-1) {
            path[n] = 'B';
            perm(r+1, c, path, n+1);
            grid[r+1][c] = 0;
        }

        if (grid[r-1][c] == 0 && r > 0) {
            path[n] = 'C';
            perm(r-1, c, path, n+1);
            grid[r-1][c] = 0;   
        }
    }

}

int main() {
    cin >> row >> col;
    grid = vector<vector<int>>(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> grid[i][j];
        }
    }

    vector<char> path(row*col);
    perm(0, 0, path, 0);

    cout << 'DONE' << endl;


}
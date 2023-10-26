#include <bits/stdc++.h>

using namespace std;

//const int INF = 1e9;

int main() {
    string flips;
    cin >> flips;
    vector<int> grid = {1, 2, 3, 4};

    // Apply the flips
    for (char flip : flips) {
        if (flip == 'H') {
            swap(grid[0], grid[2]);
            swap(grid[1], grid[3]);
        } else if (flip == 'V') {
            swap(grid[0], grid[1]);
            swap(grid[2], grid[3]);
        }
    }

    cout << grid[0] << " " << grid[1] << "\n"
         << grid[2] << " " << grid[3] << "\n";

    return 0;
}

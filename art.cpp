#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> coordinates;

int main()
{
    int n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        coordinates.push_back(make_pair(x, y));
    }

    for(const auto& coord: coordinates)
    {
        cout << coord.first << " " << coord.second << endl;
    }
}
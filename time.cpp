#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<pair<int, char>> inputList;

    for(int i = 0; i < n; i++)
    {
        char c;
        int j;
        cin >> j;
        cin >> c;

        inputList.push_back({j, c});
    }

    for (const auto &input : inputList) {
        for (int k = 0; k < input.first; k++) {
            cout << input.second;
        }

        cout << endl;
    }
}
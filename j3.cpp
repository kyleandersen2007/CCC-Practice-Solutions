#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1;
    int x2, y2;

    int t;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> t;

    int distance = abs((x2 - x1)) + abs((y2 - y1));

    if((distance % 2 == t % 2) && distance <= t){
        cout << "Y";
    }
    else{
        cout << "N";
    }
}
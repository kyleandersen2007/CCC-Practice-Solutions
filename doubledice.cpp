#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int p1 = 100;
    int p2 = 100;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            p2 -= a;
        }
        else if (a < b)
        {
            p1 -= b;
        }
    }

    cout << p1 << endl;
    cout << p2;
}
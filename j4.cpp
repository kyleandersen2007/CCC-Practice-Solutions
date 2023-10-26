#include <bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cin >> num;
    int count = 0;
    int r = num % 5;

    if (num % 5 == 0)
    {
        count++;
    }
    for (int i = r; i >= 0; i -= 5)
    {
        if (i % 4 == 0)
        {
            count++;
        }
    }

    cout << count;
}
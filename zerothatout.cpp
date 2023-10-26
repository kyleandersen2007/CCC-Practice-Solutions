#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;

    vector<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;

        if (j == 0)
        {
            if (!numbers.empty())
            {
                numbers.pop_back();
            }
        }
        else
        {
            numbers.push_back(j);
        }
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    cout << sum;

    return 0;
}
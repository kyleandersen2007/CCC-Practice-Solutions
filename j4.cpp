#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int hours = n / 60;
    int minutes = n % 60;

    std::vector<int> digits;

    digits.push_back(hours / 10);
    digits.push_back(hours % 10);

    digits.push_back(minutes / 10);
    digits.push_back(minutes % 10);

    minutes += n;
    hours += minutes / 60;

    hours %= 12;
    minutes %= 60;

    digits[0] = hours / 10;
    digits[1] = hours % 10;
    digits[2] = minutes / 10;
    digits[3] = minutes % 10;

    cout << digits[0] << digits[1] << ":" << digits[2] << digits[3] << endl;

    return 0;
}

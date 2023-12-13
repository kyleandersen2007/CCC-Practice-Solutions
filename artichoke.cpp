#include <bits/stdc++.h>

using namespace std;

double DeterminePrice(double p, double a, double b, double c, double d, double k)
{
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main()
{
    double p, a, b, c, d, k;

    cin >> p >> a >> b >> c >> d >> k;

    double f = DeterminePrice(p, a, b, c, d, 1);
    double max = f;
    double result = 0;

    for (int j = 2; j <= k; j++)
    {
        double nextIndex = DeterminePrice(p, a, b, c, d, j);

        if (max - nextIndex > result)
            result = max - nextIndex;
        if (nextIndex > max)
            max = nextIndex;
    }

    cout << setprecision(numeric_limits<double>::digits10 + 1) << result;
}

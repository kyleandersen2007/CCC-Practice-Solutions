#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin >> N;
    int counter = 0;
    for(int i = N - 1; i > 0; i--)
    {
        counter++;

        if(N % i == 0){
            break;
        }
    }

    cout << counter;
}
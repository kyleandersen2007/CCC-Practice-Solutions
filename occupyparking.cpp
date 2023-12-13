#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    string today; cin >> today;
    string yesterday; cin >> yesterday;

    int index = 0;
    for(int i = 0; i < n; i++){
        if(today[i] == 'C' && yesterday[i] == 'C'){
            index++;
        }
    }

    cout << index;
    
}
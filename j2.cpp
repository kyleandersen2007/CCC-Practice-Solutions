#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    cin >> a;
    cin >> b;

    int total = a;
    int sum = 0;

    for(int i = 1; i <= b; i++){
        
        sum = a * pow(10, i);
        total+=sum;
    }

    cout << total;
    
}
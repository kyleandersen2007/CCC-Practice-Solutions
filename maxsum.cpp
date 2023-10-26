#include <bits/stdc++.h>

using namespace std;

int main(){
    int best = 0;

    vector<int> n = {-1, 2, 4, -3, 5, 2, -5, 2};

    for(int a = 0; a < n.size(); a++){
        int sum = 0;
        for(int b = a; b < n.size(); b++){
            sum += n[b];
            best = max(best, sum);
        }

        
    }

    cout << best;   
}
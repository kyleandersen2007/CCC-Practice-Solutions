#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> n = {1, 3, 8, 2, 9, 4, 5, 6, 10, 7};

    for(int a = 0; a < n.size(); a++){
        for(int b = 0; b < n.size() - 1; b++){
            if(n[b] > n[b + 1]){
                swap(n[b], n[b + 1]);
            }
        }
    }
    
    for(int i: n){
        cout << i << " ";
    }
}
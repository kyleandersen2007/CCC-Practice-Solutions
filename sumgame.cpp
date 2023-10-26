#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers; 

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; 
        numbers.push_back(num);
    }

    

    return 0;
}


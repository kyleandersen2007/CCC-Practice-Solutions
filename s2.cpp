#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

pair<int, int> find_prime_pair(int Ni) {
    int A = 2;
    int B = 2 * Ni - A;
    while (!(isPrime(A) && isPrime(B) && A + B == 2 * Ni)) {
        A++;
        B = 2 * Ni - A;
    }
    return make_pair(A, B);
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int Ni;
        cin >> Ni;
        pair<int, int> prime_pair = find_prime_pair(Ni);
        cout << prime_pair.first << " " << prime_pair.second << endl;
    }

    return 0;
}

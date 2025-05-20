#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // Try adding prime numbers to n
    for(int i = 2; i <= 10000; i++) {
        if (i != n && isprime(i)) {
            if (isprime(n + i)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

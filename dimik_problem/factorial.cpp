#include <bits/stdc++.h>
using namespace std;

int factorial(long long n){
    long long result = 1;
    for(long long i=1;i<=n;i++){
        result *= i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long t;
    cin >> t; 

    vector<long long> results;

    // cout<<factorial(3);

    while (t--) {
        long long num;
        cin >> num;
        results.push_back(factorial(num));
    }

    
    for (long long &res : results) {
        cout << res << '\n';
    }

    return 0;
}

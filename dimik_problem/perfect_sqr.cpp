#include <bits/stdc++.h>
using namespace std;

// পূর্ণবর্গ সংখ্যা চেক করার ফাংশন
bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t; 

    vector<string> results;

    while (t--) {
        int num;
        cin >> num;
        if (isPerfectSquare(num)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    
    for (const string &res : results) {
        cout << res << '\n';
    }

    return 0;
}

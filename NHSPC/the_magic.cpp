#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        
        vector<bool> dp(n + 1, false);
        dp[0] = true;  
        for (int i = 0; i < m; i++) {
            int val = a[i];
            vector<int> cnt(n + 1, 0); 
            
            for (int j = 0; j <= n; j++) {
                if (dp[j]) cnt[j] = 0; 
                else if (j - val >= 0 && dp[j - val] && cnt[j - val] < k) {
                    dp[j] = true;
                    cnt[j] = cnt[j - val] + 1;
                }
            }
        }

        if (dp[n]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

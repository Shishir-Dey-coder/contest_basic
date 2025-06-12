#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll countPerfectSquares(ll L, ll R) {
    ll sqrtL = ceil(sqrtl(L));
    ll sqrtR = floor(sqrtl(R));
    if (sqrtR < sqrtL) return 0;
    return sqrtR - sqrtL + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while (Q--) {
        ll L, R;
        cin >> L >> R;
        cout << countPerfectSquares(L, R) << "\n";
    }
    return 0;
}

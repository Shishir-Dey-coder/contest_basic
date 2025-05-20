#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<int> results; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        results.push_back((n * n / 4) + 1);
    }
    for(const int result: results){
        cout<<result<<"\n";
    }
    return 0;
}

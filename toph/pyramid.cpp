#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; ++i) {
        
        for (int j = 1; j <= N - i; ++j) {
            cout << " ";
        }
        
        
        for (int j = 1; j <= i; ++j) {
            if (j > 1) cout << " "; 
            cout << "*";
        }
        
        cout << endl;
    }



    return 0;
}

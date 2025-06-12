#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    double sum = 0;
    for(int i = 1; i <= t; i++) {
        double n;
        cin >> n;
        sum += n;
        double avr = sum / i; 
        cout << fixed << setprecision(10) << avr << endl;
    }

    return 0;
}

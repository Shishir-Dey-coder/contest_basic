#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        long long L, R;
        cin >> L >> R;

        
        long long start = ceil(sqrt(L));

       
        long long end = floor(sqrt(R));

      
        if (start > end) {
            cout << 0 << endl;
        } else {
            cout << (end - start + 1) << endl;
        }
    }

    return 0;
}

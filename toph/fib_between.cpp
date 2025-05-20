// #include <iostream>

// using namespace std;

// int fib(int n){
//     if(n == 0) return 0; 
//     if(n == 1) return 1;  
//     return fib(n-1) + fib(n-2); 
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int a, b;
//     cin >> a >> b;
//     for(int i = a; i <= b; i++){
//         if (fib(i)>b) break;
//         cout << fib(i) << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin >> a >> b;

    // Handle the first two Fibonacci numbers
    long long fib1 = 0, fib2 = 1;
    
    // Print Fibonacci numbers in the range [a, b], avoiding duplicate '1'
    if (fib1 >= a && fib1 <= b) {
        cout << fib1 << endl;
    }

    // Only print '1' once, as we already printed '0'
    bool printedOne = false;

    while (fib2 <= b) {
        if (fib2 >= a) {
            if (fib2 == 1 && !printedOne) {
                cout << fib2 << endl;
                printedOne = true;
            } else if (fib2 != 1) {
                cout << fib2 << endl;
            }
        }

        // Generate the next Fibonacci number
        long long nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    return 0;
}

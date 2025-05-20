// #include <iostream>
// using namespace std;

// int main() {
//     int N, count = 0, num = 2;  
//     cin >> N;  // Read input (N-th prime)

//     while (count < N) {
//         bool isPrime = true;

//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             count++;  // Found a prime number
//         }

//         if (count == N) {
//             cout << num << endl;  // Print the N-th prime
//             break;
//         }

//         num++;  // Move to the next number
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

const int LIMIT = 10000000;  // Large enough upper bound for prime searching

vector<int> sieve(int n) {
    vector<bool> isPrime(LIMIT, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < LIMIT; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j < LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return primes;
}

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    vector<int> primes = sieve(N * 12);  // Ensure enough primes are found
    cout << primes[N - 1] << endl;  // 0-based indexing for N-th prime

    return 0;
}

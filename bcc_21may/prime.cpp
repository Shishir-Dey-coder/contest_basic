#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if (n <2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> T;  // initialized with size n

    // for(int i = 0; i < n; i++){  // changed 1-based to 0-based
    //     cin >> T[i];
    // }

    // for(int j = 0; j < n; j++){
    //     if (isprime(T[j])) {
    //         cout << T[j] << " is a prime number!"<<endl;  
    //     }
    //     else {
    //         cout << T[j] << " is not a prime number!"<<endl;  
    //     }
    // }

    for(int j = 1; j <= n; j++){
        if (isprime(j)) {
            // cout << j << " is a prime number!"<<endl;  
            T.push_back(j);
        }
        // else {
        //     cout << j << " is not a prime number!"<<endl;  
        // }
    }
    

    for(const auto x: T){
        cout<<x<<" ";
        
    }


    cout<<"YOu are done with prime ..";

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool isprime(int n) {
//     if (n <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> T(n);  // Initialize vector with size n
    
//     for (int i = 0; i < n; i++) {
//         cin >> T[i];
//     }

//     for (int i = 0; i < n; i++) {
//         if (isprime(T[i])) {
//             cout << T[i] << " is a prime number!" << endl;
//         } else {
//             cout << T[i] << " is not a prime number!" << endl;
//         }
//     }

//     return 0;
// }
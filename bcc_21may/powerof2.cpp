#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num <= 0) {
//         cout << "Not a power of 2" << endl;
//         return 0;
//     }

//     while (num % 2 == 0) {
//         num = num / 2;
//     }

//     if (num == 1)
//         cout << "It is a power of 2" << endl;
//     else
//         cout << "Not a power of 2" << endl;

//     return 0;
// }
int main(){
    double x,n;

    cin>>x>>n;
    cout<<fixed<<setprecision(2);
    cout<<pow(x,n);
}
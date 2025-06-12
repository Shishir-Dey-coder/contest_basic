// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    

//     unsigned long long n; //long long count = 0;
//     cin>>n;

//     while(n--){
//         unsigned long long m;cin>>m;
//         unsigned long long ans = (m*m) % 10;
//         cout<<ans<<endl;
//     }


    
// }


//string to int
//int lastDigit = n.back() - '0';


#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        char lastDigitChar = n.back(); // last character of the number
        int digit = lastDigitChar - '0'; // convert char to int
        int ans = (digit * digit) % 10;
        cout << ans << endl;
    }
    return 0;
}

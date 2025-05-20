// #include<bits/stdc++.h>
// using namespace std;
// // my solution for string and number ..

// // int factorial(int n){
// //     int f=1;
// //     for(int i=1;i<=n;i++){
// //         f *= i;
// //     }
// //     return f;
// // }
// // unsigned long long factorial(unsigned long long n){
// //     if(n==0) return 1;
// //     return n * factorial(n-1);
// // }

// bool isprime(int n){
//     if (n<2){
//         return false;
//     }
//     for(int i=2;i <=(n/2);i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }


// int main(){
//     // vector<int> v;
//     // string n;
//     // cin>>n;
//     // string m = n ;
    
    
    
//     // reverse(n.begin(),n.end()); 
//     // if (n==m){
//     //     cout<<"Palindrome ";
//     // }else{
//     //     cout<<"Not a Palindrome";
//     // }

//     // for(int j = 0; j < n; j++){
//     //     cin>>v[j];
        
//     // }
//     int n,m;
//     cin>>n>>m;
//     // for(int i=1;i<=10;i++){
//     //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     // }
//     // cout<<factorial(n);
//     // for(int i=n;i <=m;i++){
//     //     if (isprime(i)){
//     //         cout<<i<<" is a prime !"<<endl;
//     //     }else{
//     //         cout<<i<<" is not a prime !"<<endl;
//     //     }
//     //     }
//     for(int i=n;i <=m;i++){
//         if (isprime(i)){
//             cout<<i<<" ";
//         }
//         }
//     // cout<<gcd(n,m)<<endl;
//     // cout<<lcm(n,m);


//     return 0;
// }
#include<bits/stdc++.h> // for toupper
using namespace std;
int main() {
   string text = "hello, world!";
    for (char c : text) {
        c = toupper(c);
    }

   cout << text <<endl; // Output: HELLO, WORLD!
    return 0;
}

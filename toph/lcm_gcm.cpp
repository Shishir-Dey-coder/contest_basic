#include<bits/stdc++.h>
// #include <numeric> 
using namespace std;

int main(){
    long long n,a,b;
    vector<string> results;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if (gcd(a,b)+lcm(a,b) == a+b){
            results.push_back("true");

        }else{
            results.push_back("false");
        }
    }

    for(int i=0;i<n;i++){
        cout<<results[i]<<"\n";
    }


}
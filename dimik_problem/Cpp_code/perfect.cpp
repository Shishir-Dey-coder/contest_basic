#include<bits/stdc++.h>
using namespace std;


int main(){

    int t; cin>>t;

    while(t--){
        int n;cin>>n;
        int root = sqrt(n);
    if(root * root == n){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

    return 0;
}
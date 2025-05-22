#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    vector<int> v;

    while(t--){
        int a,b; cin>>a>>b;
        v.push_back(a+b);

    }

    for(int x : v){
        cout<<x<<endl;
    }
    

    
    

    return 0;
}

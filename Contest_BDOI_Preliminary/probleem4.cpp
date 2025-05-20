#include <bits/stdc++.h>
using namespace std;



int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<t;i++){
        int l,x;
        cin>>l>>x;
        int n = x/l;
        int m = x%l;
        a.push_back(n);
        b.push_back(m);
    }
    
    for(int i=0;i<t;i++){
        
            cout<<b[i]<<" "<<a[i]<<endl;


    }




    return 0;
}
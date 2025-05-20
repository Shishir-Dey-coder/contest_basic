#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,sum,product;
    cin>>n;
    sum = n*(n+1)/2;
    for(int i=1;i<n;i++){
        product *= i;
    }
    cout<<sum<<n*n<<product<<endl;


    return 0;
}
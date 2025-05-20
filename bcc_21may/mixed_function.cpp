#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int re = n/m;
    int reminder = n % m;

    cout<<re<<" "<<reminder<<" "<<m<<endl;
}
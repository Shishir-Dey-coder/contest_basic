#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code starts here
    string s = "shishir";
    reverse(s.begin(),s.end());
    s[2]='s';
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s[2]<<endl;

    cout<<s;



    return 0;
}
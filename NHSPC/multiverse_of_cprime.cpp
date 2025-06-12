#include <bits/stdc++.h>

using namespace std;

int main() {

	unsigned long long n,q; cin>>n>>q;
	vector<unsigned long long> v(n);
	while(q--){
		unsigned long long l,r;cin>>l>>r;
		cout<<gcd(l,r)<<endl;
	}
	
	
	return 0;
}

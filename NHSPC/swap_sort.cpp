#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;cin>>t;
    vector<int> v;
	
	while(t--){
		int n;cin>>n;
		
		for(int i = 0; i<n;i++){
			cin>>v[i];
			
			
		}
        cout<< *max_element(v.begin(),v.end())<<endl;
	}
	
	return 0;
}
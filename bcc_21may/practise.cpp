#include <bits/stdc++.h>
using namespace std;


int main() {


    int n,t,p;
    cin>>n;
    vector<int> T;// = {1,2,3,4,5}
    // int n = T.size();
    

    
    // cout<<*max_element(T.begin(),T.end())<<endl;
    // cout<<max(1,9);
    for(int i=0;i<n;i++){
        cin>>T[i];
        
    }

    for(int i=0;i<n;i++){
        if (T[i] % i != 0){
            cout<<"Prime!";
        }else{
            cout<<"not a prime";
        }
        
    }



    // for(int i = 0; i < n; i++) {
    //     cin >> T[i];  
    // }

        // cout<<T[i]<<" "<<"\n";

    // while(t){
    //     cin>>p;
    //     T.push_back(p);
    //     t--;
    // }
    
    for(auto x : T){
        cout<<x<<" ";
    }
    return 0;
}

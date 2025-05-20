#include <bits/stdc++.h>
using namespace std;



int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<int> results;;
    
    while(t--){
        int n;
        
        cin>>n;
        int a[n];
        int max_num = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];       
            }


        for(int i=0;i<n;i++){
            for(int j=1;i<n;i++){
                
                int equ= (a[j]-a[i]+a[i])*(a[i]+a[j]);
                if(equ > max_num){
                    max_num = equ;

                } 
                
            
            }
            results.push_back(max_num);
            
            }

            for(int i=0;i<n;i++){
                cout<<results[i]<<"\n";     
            }


            

        
        
    }
    
    
    
    
    
    return 0;
}
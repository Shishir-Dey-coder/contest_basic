#include<bits/stdc++.h>

using namespace std;

int main(){

    int t,a,b;
    vector<int> result;
    int m;
    cin>>t;


    for (int i=0;i<t;i++){
        cin>>a>>b;

        if (a % b != 0){
            result.push_back(b-(a%b));
            
        }else{
            result.push_back(0);
        }     
        
    }
    for (int j=0;j<t;j++){
        cout<<result[j]<<endl;
        
    }
    


}

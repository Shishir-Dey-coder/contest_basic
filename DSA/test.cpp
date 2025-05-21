#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    int uc = 0;
    int lc = 0;

    cin>>n;
    for(int i = 0;i<n.size();i++){
        if(isupper(n[i])){
            uc += 1;
        }
        else{
            lc += 1;
        }
        
    }


    for(int i = 0;i<n.size();i++){
        if (uc > lc){
            cout<<toupper(n[i]);
        }else{
            cout<<tolower(n[i]);
        }
        
        
    }

    
}
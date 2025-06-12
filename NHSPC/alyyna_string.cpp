#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int upper = 0;
    int lower = 0;


    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            upper++;
        }
        if(islower(s[i])){
            lower++;
        
    }
    

}
    cout<<upper<<" "<<lower<<endl;
    


    
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; int count = 0;
    cin>>n;



    for(int i= 1;i<=n;i++){
        if(n%i ==0){
            count++;
        }
    }

    if(count > 2){
        cout<<"Well done"<<endl;
    }else{
        cout<<"Never give up"<<endl;
    }
}
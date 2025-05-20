#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,temp;
    

    cin>>a>>b;
    cout<<"Before swapping a & b are: "<<a<<" "<<b<<endl;
    //swap(a,b);
    temp = a;
    a = b;
    b = temp;
    cout<<"after swapping  a & b are: "<<a<<" "<<b<<endl;
}
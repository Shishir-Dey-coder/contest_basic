#include <iostream>
using namespace std;


bool is_arm(int n){
    int original,sum;
    original = n;
    sum = 0;

    while(n>0){
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n = n / 10;
        }
        if (sum == original){
            return true;
        }
        return false;



}



int main() {
    // int n, sum = 0;
    // cin >> n;
    // int original = n; // Save the original value

    // while (n > 0) {
    //     int lastDigit = n % 10;
    //     sum += lastDigit * lastDigit * lastDigit;
    //     n = n / 10;
    // }

    // if (sum == original) {
    //     cout << "It's an Armstrong number :)";
    // } else {
    //     cout << "Not an Armstrong :)";
    // }
    int n,m;
    cin>>n>>m;
    for (int i=n;i<=m;i++){
        if (is_arm(i)){
            cout<<i<<" It is an armstrong number ."<<endl;
        }
        // else{
        //     cout<<"It is not an armstrong number "<<endl;
        // }
    
        
    }
    return 0;

}

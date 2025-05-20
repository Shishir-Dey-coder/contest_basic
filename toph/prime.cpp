#include <iostream>
using namespace std;

int main() {
    int N,count=0;
    cin >> N;
    
    if (N <= 1) {
        cout << "No" << endl;  // Numbers <= 1 are not prime
    } else {
        bool isPrime = true;
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }

       for(int i=0;i<=N;i++){
        if(N==count){
            if(i==isPrime){
                cout<<i;
                count++;

            }
        }
       }
    }

    return 0;
}

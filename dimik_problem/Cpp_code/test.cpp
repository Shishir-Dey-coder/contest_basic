#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    vector<string> results; 

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N ;
        if (N+3 <= 10){
            results.push_back("Yes");
        }else{
            results.push_back("No");
        }



        
        
    }

    
    for (string result : results) {
        cout << result << endl;
    }

    return 0;
}

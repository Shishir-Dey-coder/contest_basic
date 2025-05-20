// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n,x1,x2,y1,y2;
//     long long D;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>x1>>x2;
//         cin>>y1>>y2;
        
//     }
//     D = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
//     cout<<D;
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t; // Input number of test cases
    
    while(t--) { // Loop runs t times
        int n; // Number of times to print "Hello World!" in this test case
        cin >> n; // Input number of times to print
        
        // Print "Hello World!" n times
        while(n--) {
            cout << "Hello World!" << endl;
        }
    }

    return 0;
}

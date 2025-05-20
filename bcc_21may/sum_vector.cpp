#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = { 5, 10, 15 };
    
  

    // Use accumulate to find the sum of elements in the vector
    int sum = accumulate(vec.begin(),vec.end(), 0);
  
    cout << sum << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strings(n); 

    
    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> strings[i]; 
    }

    
    cout << "\nThe strings you entered are:\n";
    for (const string& s : strings) {
        cout << s << endl;
    }

    return 0;
}
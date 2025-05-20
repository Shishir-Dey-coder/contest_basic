#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n; 
    vector<int> marks(n); 

    
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    
    int min_mark = *min_element(marks.begin(), marks.end());

    
    for (int i = 0; i < n; i++) {
        if (marks[i] > min_mark) {
            count++;
        }
    }

    
    cout << count << endl;

    return 0;
}
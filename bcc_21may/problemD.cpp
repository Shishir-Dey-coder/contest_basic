#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> result;

    while (t--) {
        vector<int> temp(2); 
        cin >> temp[0] >> temp[1];

        if(temp[0]>temp[1]) cout<<">"<<endl;else if (temp[0]<temp[1]) cout<<"<"<<endl; else cout<<"="<<endl;
        
    }

    // for (int i = 0; i < result.size(); i++) {
    //     cout << "Case " << i + 1 << ": " << result[i] << endl;
    // }

    return 0;
}

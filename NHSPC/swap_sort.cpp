#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> arrPos(n);
    for (int i = 0; i < n; i++) {
        arrPos[i] = {arr[i], i};
    }
    sort(arrPos.begin(), arrPos.end());
    
    vector<bool> visited(n, false);
    int swaps = 0;
    
    for (int i = 0; i < n; i++) {
        if (visited[i] || arrPos[i].second == i) {
            continue;
        }
        
        int cycle_size = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = arrPos[j].second;
            cycle_size++;
        }
        
        if (cycle_size > 0) {
            swaps += (cycle_size - 1);
        }
    }
    
    return swaps;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << minSwaps(arr) << "\n";
    }
    return 0;
}
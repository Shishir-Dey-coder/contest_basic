#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;

    unordered_set<int> uniqueNums(nums.begin(), nums.end());

    int sumSet = accumulate(uniqueNums.begin(), uniqueNums.end(), 0);
    int sumNums = accumulate(nums.begin(), nums.end(), 0);

    int unique = 2 * sumSet - sumNums;
    cout << "Unique number: " << unique << endl;

    return 0;
}

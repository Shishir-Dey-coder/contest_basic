#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> unionSet;

    // Read the first set and insert into the union set
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        unionSet.insert(num);
    }

    // Read the second set and insert into the union set
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        unionSet.insert(num);
    }

    // Print the union set
    for (int num : unionSet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
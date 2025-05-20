#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; 
    double total_sum = 0; 

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num; 
        total_sum += num; 
        double average = total_sum / (i + 1); 
        
        cout << fixed << setprecision(10) << average << endl;
    }

    return 0;
}
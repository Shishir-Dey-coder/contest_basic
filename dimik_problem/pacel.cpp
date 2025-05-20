#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Nth row sum of Pascal's Triangle is 2^N
    cout << (1 << N) << '\n';

    return 0;
}

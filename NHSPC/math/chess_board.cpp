#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // শেষ ডিজিট বের করি
    int lastDigitA = A.back() - '0';
    int lastDigitB = B.back() - '0';

    // যোগফল parity চেক করি
    if ((lastDigitA + lastDigitB) % 2 == 0)
        cout << "Black" << endl;
    else
        cout << "White" << endl;

    return 0;
}

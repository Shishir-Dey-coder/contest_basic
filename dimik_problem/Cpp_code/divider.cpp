//https://dimikoj.com/problems/4/divisor



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    vector<string> results;

    for (int case_num = 1; case_num <= test_cases; ++case_num) {
        int number;
        cin >> number;

        vector<int> divisors;

        // গুণনীয়ক বের করা
        for (int i = 1; i <= number; ++i) {
            if (number % i == 0) {
                divisors.push_back(i);
            }
        }

        // আউটপুট তৈরির জন্য স্ট্রিং বানানো
        string result = "Case " + to_string(case_num) + ":";
        for (int divisor : divisors) {
            result += " " + to_string(divisor);
        }
        results.push_back(result);
    }

    // সমস্ত আউটপুট একসাথে প্রদর্শন করা
    for (const string& res : results) {
        cout << res << endl;
    }

    return 0;
}

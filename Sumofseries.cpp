#include <iostream>

using namespace std;

class Solution {
public:
    int seriesSum(int n) {
        return n * (n + 1) / 2; // Here using the direct formula for the sum of n natural numbers.
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        Solution obj;
        int res = obj.seriesSum(n);
        cout << res << endl;
    }
    return 0;
}

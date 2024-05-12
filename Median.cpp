#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int find_median(vector<int>& v) {
        sort(v.begin(), v.end());  // Sort the values

        int l = v.size();
        int avg = l / 2;
        if (l % 2 != 0) {
            return v[avg];  // If length of array odd then return middle number
        } else {
            return (v[avg] + v[avg - 1]) / 2;  // Else, return the average of two middle numbers
        }
    }
};

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; ++j) {
            cin >> v[j];
        }
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << endl;
    }
    return 0;
}

//Given a number n.Find if the digit sum(or sum of digits) of n is a Palindrome number or not.
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0,r=0,o=0,re=0,s=0;
        while(n!=0)      //sum the all digits
        {
            r=n%10;       //n mod 10 so that we get the each digit or reminder
            sum=sum+r;    // add the reminder
            n=n/10;       // remove that digit which already add to the sum by dividing with 10
        }
        o=sum;
        while(sum!=0)    //reversing the  number
        {
            re=sum%10;    
            s=s*10+re;
            sum=sum/10;
        }
        if(o==s)         //if sum of all digits and reversing the number equal then number is palindrome else not palindrome
        return 1;
        else
        return 0;
        }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

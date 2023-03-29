//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        int sumOfDigits = 0;
        string n_string = to_string(N);
        for(auto u : n_string) {
            string s(1, u);
            sumOfDigits += stoi(s);
        }

        string digitSum = to_string(sumOfDigits);
        string reversedDigitSum = digitSum;
        reverse(reversedDigitSum.begin(), reversedDigitSum.end());
        
        return (reversedDigitSum == digitSum) ? 1 : 0;
    }
};

//{ Driver Code Starts.
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

// } Driver Code Ends
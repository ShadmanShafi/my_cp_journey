#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; string str;
        cin >> str;

        string tempString = str;
        reverse(tempString.begin(), tempString.end());
        if(tempString  == str) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
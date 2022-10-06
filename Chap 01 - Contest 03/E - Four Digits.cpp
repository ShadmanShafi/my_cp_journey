#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, zero="0";
    cin >> n;
    int length = n.length();

    while(4-length) {
      cout << "0";
      length++;
    }
    cout << n;

    return 0;
}

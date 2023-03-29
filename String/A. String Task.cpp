#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, answer = "";
    cin >> s;

    for(auto u : s) {
        if(u != 'a' and u != 'e' and u != 'i' and u != 'o' and u != 'u' and u != 'y' and u != 'A' and u != 'E' and u != 'I' and u != 'O' and u != 'U' and u != 'Y') {
            answer += '.';
            answer += tolower(u);
        }
    }
    cout << answer;
}
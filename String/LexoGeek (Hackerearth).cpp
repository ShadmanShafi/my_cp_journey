#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t; cin >> t;
    while(t--) {
        string w; cin >> w;

        (next_permutation(w.begin(), w.end())) ? cout << w << "\n" : cout << "no answer" << "\n";
    }
    return 0;
}
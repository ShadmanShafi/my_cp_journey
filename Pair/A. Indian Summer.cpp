#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int n; cin >> n;
    vector< pair<string, string> > leaves(n);
    for(int i=0; i<n; i++) {
        string leafDesc, leafColor;
        cin >> leafDesc >> leafColor;
        leaves.push_back({leafDesc, leafColor});
    }

    sort(leaves.begin(), leaves.end());
    auto last = unique(leaves.begin(), leaves.end());
    leaves.erase(last, leaves.end());

    cout << leaves.size() - 1;
    return 0;
}
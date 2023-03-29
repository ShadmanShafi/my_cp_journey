#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, l, r, k, totalCost=0, noOfChocoBars=0;
        cin >> n >> l >> r >> k;
        vector<int> chocolateBars(n);
        for(int i=0; i<n; i++) {
            int price; cin >> price;
            chocolateBars.push_back(price);
        }

        sort(chocolateBars.begin(), chocolateBars.end());

        for(auto u : chocolateBars) {
            if(u >= l and u <= r and (u+totalCost) <= k) {
                totalCost += u;
                noOfChocoBars++;
            }
        }
        cout << noOfChocoBars << endl;
    }
    return 0;
}
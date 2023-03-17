#include <bits/stdc++.h>
using namespace std;

int main() {
    bool flag=true;
    int n, sereja=0, dima=0;
    cin >> n;
    vector<int> cards (n);
    for (int i=0; i<n; i++) {
        cin >> cards[i];
    }

    while (!cards.empty()) {
        if (flag) {
            if (cards[0] > cards.back()) {
                sereja += cards[0];
                cards.erase(cards.begin());
            } else {
                sereja += cards.back();
                cards.pop_back();
            }
        } else {
            if (cards[0] > cards.back()) {
                dima += cards[0];
                cards.erase(cards.begin());
            } else {
                dima += cards.back();
                cards.pop_back();
            }
        }
        flag = !flag;
    }

    cout << sereja << " " << dima;
    return 0;
}

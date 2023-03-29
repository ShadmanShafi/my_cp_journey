#include <bits/stdc++.h>
using namespace std;

int main() {
    string l1, l2, l3; int syllable1=0, syllable2=0, syllable3=0;
    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);

    for(auto u : l1) {
        if(u == 'a' or u == 'e' or u == 'i' or u == 'o' or u == 'u') syllable1++;
    }
    for(auto u : l2) {
        if(u == 'a' or u == 'e' or u == 'i' or u == 'o' or u == 'u') syllable2++;
    }
    for(auto u : l3) {
        if(u == 'a' or u == 'e' or u == 'i' or u == 'o' or u == 'u') syllable3++;
    }

    if(syllable1 == 5 and syllable2 == 7 and syllable3 == 5) cout << "YES";
    else cout << "NO";

    return 0;
}
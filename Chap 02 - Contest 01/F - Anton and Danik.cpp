#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, anton = 0, danik = 0;
  cin >> n;
  char s[n];
  for (int i = 0; i < n; i++)
    cin >> s[i];

  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') anton++;
    else danik++;
  }

  if (anton > danik) cout << "Anton";
  else if (anton < danik) cout << "Danik";
  else cout << "Friendship";

  return 0;
}

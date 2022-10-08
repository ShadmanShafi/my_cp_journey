#include <bits/stdc++.h>

using namespace std;

int main() {
  int length, count = 0;
  cin >> length;
  char nStones[length];
  for (int i = 0; i < length; i++)
    cin >> nStones[i];

  for (int i = 0; i < length - 1; i++) {
    if (nStones[i] == nStones[i + 1]) count++;
  }
  cout << count;

  return 0;
}

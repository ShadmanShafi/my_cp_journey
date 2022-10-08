#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  float arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  float positiveCount = 0, negativeCount = 0, zeroCount = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) positiveCount++;
    else if (arr[i] < 0) negativeCount++;
    else if (arr[i] == 0) zeroCount++;
  }

  float positiveRatio = positiveCount / (float) n;
  float negativeRatio = negativeCount / (float) n;
  float zeroRatio = zeroCount / (float) n;

  cout << fixed << setprecision(6) << positiveRatio << "\n";
  cout << fixed << setprecision(6) << negativeRatio << "\n";
  cout << fixed << setprecision(6) << zeroRatio;

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, leftDiagonal = 0, rightDiagonal = 0;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) leftDiagonal += arr[i][j];
      if (j == n - i - 1) rightDiagonal += arr[i][j];
    }
  }

  cout << abs(leftDiagonal - rightDiagonal);
  return 0;
}
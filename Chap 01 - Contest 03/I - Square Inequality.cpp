#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b, c;
   cin >> a >> b >> c;

   (a * a + b * b < c * c) ? cout << "Yes" : cout << "No";

   return 0;
}
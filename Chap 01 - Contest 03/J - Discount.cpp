#include <bits/stdc++.h>
using namespace std;

int main() {
   double a, b, discount;
   cin >> a >> b;

   discount = ((a-b)/a)*100;
   cout << discount;

   return 0;
}

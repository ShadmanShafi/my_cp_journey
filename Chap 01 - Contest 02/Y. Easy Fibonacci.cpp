#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n) {
   if(n == 1) cout << 0;
   else {
      cout << 0 << " " << 1 << " ";
      int firstTerm=0, secondTerm=1, nthTerm;
      for(int i=3; i<=n; i++) {
         nthTerm = firstTerm + secondTerm;
         cout << nthTerm << " ";
         firstTerm = secondTerm;
         secondTerm = nthTerm;
      }
   }
}

int main() {
   int n;
   cin >> n;
   fibonacci(n);

   return 0;
}

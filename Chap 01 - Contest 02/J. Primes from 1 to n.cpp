#include <bits/stdc++.h>
using namespace std;

int main() {
   int num;
   cin >> num;
   bool isPrime = true;

   for(int i=2; i<=num; i++) {
      for(int j=2; j<=i; j++) {
         if(j!=i and i%j == 0) isPrime = false;
      }
      if(isPrime) cout << i << " ";
      isPrime = true;
   }

   return 0;
}

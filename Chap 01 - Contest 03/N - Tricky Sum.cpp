#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--) {
      long long n, count=0;
      cin >> n;
      long long result= (n*(n+1))/2;

      for(long long i=1; i<=n; i*=2)
         result -= 2*i;

      cout << result << "\n";
   }

   return 0;
}

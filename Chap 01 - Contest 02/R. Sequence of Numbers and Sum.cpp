#include <bits/stdc++.h>
using namespace std;

int main() {
   while(1) {
      int m, n, sum=0;
      cin >> m >> n;
      if(m<=0 or n<=0) break;
      if(m > n) swap(m, n);

      for(int i=m; i<=n;i++) {
         cout << i << " ";
         sum += i;
      }
      cout << "sum =" << sum;
      cout << "\n";
   }

   return 0;
}

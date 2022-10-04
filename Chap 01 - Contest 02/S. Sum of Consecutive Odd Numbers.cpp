#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--) {
      int x, y, sum=0;
      cin >> x >> y;
      if(x > y) swap(x, y);
      if(x%2 == 0) x++;
      else if(x%2 != 0) x+=2;

      for(int i=x; i<y; i+=2) {
         sum += i;
      }
      cout << sum << "\n";
   }

   return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
   string n;
   int c=0;
   cin >> n;
   int length = n.length()-1;
   bool isLeadingZero = false;

   for(int i=length; i>=0; i--) {
      if(n[i] == '0' && !isLeadingZero) continue;

      cout << n[i];
      isLeadingZero = true;
   }

   cout << endl;
   isLeadingZero = false;

   for(int i=length; i>=0; i--) {
      if(n[i] == '0' && !isLeadingZero) continue;

      if(n[c] != n[i]) {
         cout << "NO" ;
         return 0;
      }
      c++;
      isLeadingZero = true;
   }

   cout << "YES";

   return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, value=1;
   cin >> n;

   for(int i=0; i<n; i++) {
      for(int j=value; j<4*n; j++) {
         if(j%4 == 0) {
            value++;
            break;
         }
         cout << value++ << " ";
      }
      cout << "PUM" << "\n";
   }

   return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
   // Receiving Input
   int t; cin >> t; int arr[t]; long long int fac[t]; for(int i=0; i<t; i++) cin >> arr[i];

   // Calculating the factorial of each input
   for(int i=0; i<t; i++) {
      fac[i] = 1;
      if(arr[i] == 0 or arr[i] == 1) fac[i] = 1;
      else {
         for(int j=1; j<=arr[i]; j++) {
               fac[i] *= j;
         }
      }
   }

   // Printing the result
   for(int i=0; i<t; i++) cout << fac[i] << endl;

   return 0;
}

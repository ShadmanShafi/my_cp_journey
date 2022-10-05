#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   for(int i=0; i<n; i++) {
      for(int j=n-i-1; j>0; j--)
         cout << " ";
      for(int k=1; k<=i+1; k++)
         cout << "*";
      for(int l=1; l<=i; l++)
         cout << "*";
      cout << "\n";
   }

   for(int i=0; i<n; i++) {
      for(int j=1; j<=i; j++)
         cout << " ";
      for(int k=1; k<=n-i; k++)
         cout << "*";
      for(int l=n-i-1; l>0; l--)
         cout << "*";
      cout << "\n";
   }

   return 0;
}

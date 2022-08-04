#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m=0, temp; cin >> n; int array[n];
   for(int i=0; i<n; i++) {
      cin >> array[i];
      if(array[i]>m) m = array[i];
   }
   cout << m << endl;

   return 0;
}

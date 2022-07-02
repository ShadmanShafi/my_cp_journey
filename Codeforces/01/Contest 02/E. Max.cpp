#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m=0, temp; cin >> n; int array[n]; for(int i=0; i<n; i++) cin >> array[i];

   for(int i=0; i<n; i++) {
      temp = max(array[i], array[i+1]);
      if(temp > m) m=temp;
   }
   cout << m << endl;

   return 0;
}

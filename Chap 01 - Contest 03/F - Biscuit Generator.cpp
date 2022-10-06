#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b, t, result=0;
   cin >> a >> b >> t;

   for(int i=a; i<=t; i+=a)
      result += b;

   cout << result;

   return 0;
}

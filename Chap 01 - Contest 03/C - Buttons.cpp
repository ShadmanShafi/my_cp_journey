#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b, a2, b2, ab, result=0;
   cin >> a >> b;

   a2 = a + (a-1);
   b2 = b + (b-1);
   ab = a + b;

   if(a2 > b2 and a2 > ab) result = a2;
   else if(b2 > ab) result = b2;
   else result = ab;

   cout << result;

   return 0;
}

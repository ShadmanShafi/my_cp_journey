#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, a, b, sumofDigits[2], result=0;
   cin >> n >> a >> b;

   for(int i=a; i<n; i++) {
      sumofDigits[0] = i%10;
      sumofDigits[1] = i/10;

      if(sumofDigits[0] + sumofDigits[1] >= a and sumofDigits[0] + sumofDigits[1] <= b) {
         result += i;
         cout << result << " ";
      }
   }
   cout << result;

   return 0;
}

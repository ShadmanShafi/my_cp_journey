#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, a, b, sumofDigitsArr[4], sumOfDigits, result=0;
   cin >> n >> a >> b;
   if(a > b) swap(a, b);

   for(int i=1; i<=n; i++) {
      sumofDigitsArr[0] = i%10;
      sumofDigitsArr[1] = (i/10) %10;
      sumofDigitsArr[2] = (i/100) %10;
      sumofDigitsArr[3] = (i/1000) %10;

      sumOfDigits = sumofDigitsArr[0] + sumofDigitsArr[1] + sumofDigitsArr[2] + sumofDigitsArr[3];

      if(sumOfDigits >= a and sumOfDigits <= b) {
         result += i;
         //cout << result << " ";
      }
   }
   cout << result;

   return 0;
}

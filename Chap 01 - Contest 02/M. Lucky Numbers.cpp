#include <bits/stdc++.h>
using namespace std;

int main() {
   int num1, num2;
   int digits=0;
   cin >> num1 >> num2;
   bool luckyNum = false;

   for(int i=num1; i<=num2; i++) {
      digits = log10(i) + 1;
      for(int j=0; j<=digits; j++) {
         if(i[j] == 4 || i[j] == 7) luckyNum=true;
      }
      if(luckyNum) cout i;
   }

   return 0;
}

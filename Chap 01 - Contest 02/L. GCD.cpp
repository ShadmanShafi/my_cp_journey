#include <bits/stdc++.h>
using namespace std;

int main() {
   int num1, num2;
   int gcd=1;
   cin >> num1 >> num2;
   int smallerNum = (num1 < num2) ? num1 : num2;
   //cout << smallerNum;

   for(int i=1; i<=smallerNum; i++) {
      if(num1%i==0 and num2%i==0) gcd=i;
   }
   cout << gcd;

   return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, i=0;
   cin >> t;
   while(t--) {
      long long n;
      cin >> n;
      int noOfOnesInBinary=0;
      while(n) {
         //if(n%2 != 0) noOfOnesInBinary = noOfOnesInBinary*10 + 1;
         noOfOnesInBinary += n%2;
         n /= 2;
      }
      //cout << "binary 1s:" << noOfOnesInBinary << "\n";

      //while(noOfOnesInBinary) {
         //result = result + (noOfOnesInBinary%10 * pow(2, i));
         //i++;
         //noOfOnesInBinary /= 10;
      //}
      long long result=1;
      for(int i=1; i<=noOfOnesInBinary; i++) {
         result *= 2;
      }
      cout << result-1 << "\n";
      //i=0;
      result=0;
   }

   return 0;
}

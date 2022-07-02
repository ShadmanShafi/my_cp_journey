#include <bits/stdc++.h>
using namespace std;

int main() {
   int i, positiveCount=0, negativeCount=0, evenCount=0, oddCount=0;
   cin >> i; int array[i]; for(int j=0; j<i; j++) cin >> array[j];

   for(int j=0; j<i; j++) {
      if(array[j] > 0) positiveCount++;
      if(array[j] < 0) negativeCount++;
      if(array[j] % 2 == 0) evenCount++;
      if(array[j] % 2 != 0) oddCount++;
   }
   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",
           evenCount, oddCount, positiveCount, negativeCount);

   return 0;
}

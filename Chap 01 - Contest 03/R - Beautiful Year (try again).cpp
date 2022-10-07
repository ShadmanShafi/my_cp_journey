#include <bits/stdc++.h>
using namespace std;

int main() {
   string y;
   cin >> y;
   int year = stoi(y);

   for(int i=year+1; i<9013; i++) {
      int tempYearValue = i;
      int length = to_string(i).length();
      int yearDigits[length];

      for(int j=length; j>0; j--) {
         yearDigits[j-1] = tempYearValue%10;
         tempYearValue /= 10;
      }

      if(yearDigits[0] != yearDigits[1] and
         yearDigits[0] != yearDigits[2] and
         yearDigits[0] != yearDigits[3] and
         yearDigits[1] != yearDigits[2] and
         yearDigits[1] != yearDigits[3] and
         yearDigits[2] != yearDigits[3]) {
         cout << i;
         return 0;
      }
   }
}

#include <bits/stdc++.h>
using namespace std;

bool checkLuckyNumber(int number) {
   int numberOfDigits = to_string(number).length();
   int digits[6];
   bool skipIteration = true;
   bool luckyNumberFound = false;

   if(numberOfDigits == 1 and (number == 4 or number == 7)) {
      cout << number << " ";
      luckyNumberFound = true;
   }
   else if(numberOfDigits == 2) {
      digits[0] = number/10 % 10;
      digits[1] = number % 10;

      if((digits[0] == 4 or digits[0] == 7) and
         (digits[1] == 4 or digits[1] == 7)) {
            skipIteration = false;
      }

      if(!skipIteration) {
         cout << number << " ";
         luckyNumberFound = true;
      }
   }
   else if(numberOfDigits == 3) {
      digits[0] = number/100 % 10;
      digits[1] = number/10 % 10;
      digits[2] = number % 10;

      if((digits[0] == 4 or digits[0] == 7) and
         (digits[1] == 4 or digits[1] == 7) and
         (digits[2] == 4 or digits[2] == 7)) {
            skipIteration = false;
      }

      if(!skipIteration) {
         cout << number << " ";
         luckyNumberFound = true;
      }
   }
   else if(numberOfDigits == 4) {
      digits[0] = number/1000 % 10;
      digits[1] = number/100 % 10;
      digits[2] = number/10 % 10;
      digits[3] = number % 10;

      if((digits[0] == 4 or digits[0] == 7) and
         (digits[1] == 4 or digits[1] == 7) and
         (digits[2] == 4 or digits[2] == 7) and
         (digits[3] == 4 or digits[3] == 7)) {
            skipIteration = false;
      }

      if(!skipIteration) {
         cout << number << " ";
         luckyNumberFound = true;
      }
   }
   else if(numberOfDigits == 5) {
      digits[0] = number/10000 % 10;
      digits[1] = number/1000 % 10;
      digits[2] = number/100 % 10;
      digits[3] = number/10 % 10;
      digits[4] = number % 10;

      if((digits[0] == 4 or digits[0] == 7) and
         (digits[1] == 4 or digits[1] == 7) and
         (digits[2] == 4 or digits[2] == 7) and
         (digits[3] == 4 or digits[3] == 7) and
         (digits[4] == 4 or digits[4] == 7)) {
            skipIteration = false;
      }

      if(!skipIteration) {
         cout << number << " ";
         luckyNumberFound = true;
      }
   }
   else if(numberOfDigits == 6) {
      digits[0] = number/100000 % 10;
      digits[1] = number/10000 % 10;
      digits[2] = number/1000 % 10;
      digits[3] = number/100 % 10;
      digits[4] = number/10 % 10;
      digits[5] = number % 10;

      if((digits[0] == 4 or digits[0] == 7) and
         (digits[1] == 4 or digits[1] == 7) and
         (digits[2] == 4 or digits[2] == 7) and
         (digits[3] == 4 or digits[3] == 7) and
         (digits[4] == 4 or digits[4] == 7) and
         (digits[5] == 4 or digits[5] == 7)) {
            skipIteration = false;
      }

      if(!skipIteration) {
         cout << number << " ";
         luckyNumberFound = true;
      }
   }
   return luckyNumberFound;
}

int main() {
   int num1, num2;
   bool luckyNumberFound = false;

   cin >> num1 >> num2;

   for(int i=num1; i<=num2; i++) {
      checkLuckyNumber(i) ? luckyNumberFound=true : true;
   }

   if(!luckyNumberFound) cout << -1;

   return 0;
}


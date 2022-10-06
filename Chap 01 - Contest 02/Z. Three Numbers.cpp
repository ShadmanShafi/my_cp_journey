#include <bits/stdc++.h>
using namespace std;

int main() {
   int maxValue, desiredTotal, result=0, answer=0;
   cin >> maxValue >> desiredTotal;

   int x=0, y=0, z=0;
   for(int i=0; i<=maxValue; i++) {
      if(result == desiredTotal) answer++;

      for(int j=i; j<maxValue; j++) {
         x=j;
         //y=i;
         z=i;
         for(int k=i; k<=maxValue; k++) {
            y=k;
            result = x + y + z;
            if(result == desiredTotal) {
            cout << 1 << " " << x << y << z << "\n";
            answer++;
            }
         }
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 2 << " " << x << y << z << "\n";
            answer++;
         }

         x=j;
         y=i;
         for(int k=i; k<=maxValue; k++) {
            z=k;
            result = x + y + z;
            if(result == desiredTotal) {
            cout << 3 << " " << x << y << z << "\n";
            answer++;
            }
         }
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 4 << " " << x << y << z << "\n";
            answer++;
         }

         x=i;
         y=j;
         //z=i;
         for(int k=i; k<=maxValue; k++) {
            z=k;
            result = x + y + z;
            if(result == desiredTotal) {
            cout << 5 << " " << x << y << z << "\n";
            answer++;
            }
         }
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 6 << " " << x << y << z << "\n";
            answer++;
         }

         //x=i;
         y=j;
         z=i;
         for(int k=i; k<=maxValue; k++) {
            x=k;
            result = x + y + z;
            if(result == desiredTotal) {
            cout << 7 << " " << x << y << z << "\n";
            answer++;
            }
         }
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 8 << " " << x << y << z << "\n";
            answer++;
         }

         x=i;
         //y=i;
         z=j;
         for(int k=i; k<=maxValue; k++) {
            y=k;
            result = x + y + z;
            if(result == desiredTotal) {
            cout << 9 << " " << x << y << z << "\n";
            answer++;
            }
         }
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 10 << " " << x << y << z << "\n";
            answer++;
         }

         //x=i;
         y=i;
         for(int k=i; k<=maxValue; k++) {
            x=k;
            result = x + y + z;
            if(result == desiredTotal) {
            cout << 11 << " " << x << y << z << "\n";
            answer++;
            }
         }
         z=j;
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 12 << " " << x << y << z << "\n";
            answer++;
         }

         x=j;
         y=j;
         z=i;
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 13 << " " << x << y << z << "\n";
            answer++;
         }

         x=j;
         y=i;
         z=j;
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 14 << " " << x << y << z << "\n";
            answer++;
         }

         x=i;
         y=j;
         z=j;
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 15 << " " << x << y << z << "\n";
            answer++;
         }

         x=j;
         y=j;
         z=j;
         result = x + y + z;
         if(result == desiredTotal) {
            cout << 16 << " " << x << y << z << "\n";
            answer++;
         }
      }
   }
   cout << "\n" << answer;

   return 0;
}

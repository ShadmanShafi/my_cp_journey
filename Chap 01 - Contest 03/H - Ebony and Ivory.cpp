#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b, c;
   cin >> a >> b >> c;
   int temp = c;
   if(a > b) swap(a, b);

   for(int i=c; i>=0; i-=a) {
      if(i == 0) {
         cout << "Yes";
         return 0;
      }
   }
   for(int i=c; i>=0; i-=b) {
      if(i == 0) {
         cout << "Yes";
         return 0;
      }
   }
   for(int i=c; i>=0; i-=a) {
      for(int j=c; j>=0; j-=b) {
         temp = c - i - j;
         if(temp == 0) {
            cout << "Yes";
            return 0;
         }
      }
      temp = c;
   }

   cout << "No";

   return 0;
}

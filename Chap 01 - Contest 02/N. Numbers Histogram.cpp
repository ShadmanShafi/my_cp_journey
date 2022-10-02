#include <bits/stdc++.h>
using namespace std;

int main() {
   char symbol;
   int length;
   cin >> symbol >> length;

   int arr[length];
   for(int i=0; i<length; i++) {
      cin >> arr[i];
      for(int j=0; j<arr[i]; j++) {
         cout << symbol;
      }
      cout << "\n";
   }

   return 0;
}

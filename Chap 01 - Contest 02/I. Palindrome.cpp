#include <bits/stdc++.h>
using namespace std;

int main() {
   string num;
   cin >> num;
   bool flag = true;
   int size = num.size()-1;

   for(int i=0; i<size/2; i++) {
      if(num[i] != num[size-i]) {
         flag = false;
         break;
      }
   }

   bool zero = false;

   for(int i=size; i>=0; i--) {
      if(num[i] != '0') {
         cout << num[i];
         zero = true;
      }
      if(zero and num[i]=='0') cout << "0";
    }

    flag ? cout << endl << "YES" : cout << endl << "NO";

    return 0;
}

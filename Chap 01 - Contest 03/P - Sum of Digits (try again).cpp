#include<bits/stdc++.h>
using namespace std;

int main() {
   string n;
   cin >> n;
   int size = n.length();
   int count=0;

   while(size>1) {
      int sum = 0;
      for(int i=0; i<size; i++) {
         int a=n[i] - '0';
         sum = sum + a;
      }
      n = to_string(sum);
      size = n.length();
      count++;
    }

    cout << count << '\n';
    return 0;
}

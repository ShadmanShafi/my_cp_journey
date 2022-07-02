#include <bits/stdc++.h>
using namespace std;

int main()
{
   char x; cin >> x;
   if(x >= 'A' && x<= 'Z') printf("%c\n", x+32);
   else if(x >= 'a' && x<= 'z') printf("%c\n", x-32);

   return 0;
}

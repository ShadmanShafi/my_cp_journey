#include <bits/stdc++.h>
using namespace std;

int main()
{
   char s; int a, b; cin >> a >> s >> b;
   if(s == '+') cout << a+b << endl;
   else if(s == '-') cout << a-b << endl;
   else if(s == '*') cout << a*b << endl;
   else if(s == '/') cout << a/b << endl;

   return 0;
}

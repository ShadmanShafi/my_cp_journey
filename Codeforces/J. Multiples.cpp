#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A, B; cin >> A >> B;
   (A % B == 0 or B % A == 0) ? cout << "Multiples\n" : cout << "No Multiples" << endl;

   return 0;
}

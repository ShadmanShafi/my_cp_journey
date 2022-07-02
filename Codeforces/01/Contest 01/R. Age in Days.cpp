#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a ; cin >> a;
	int y = a/365 ; a %= 365 ;
	int m = a/30 ; a %= 30 ;

	printf("%d years\n", y);
	printf("%d months\n", m);
	printf("%d days\n", a);

	return 0 ;

}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a ; cin >> a ;

	if(ceil(a)==floor(a)) cout <<"int " << int(a) << endl  ;
	else cout << "float "<< int(a) << " " << a - int(a) << endl ;

	return 0 ;
}

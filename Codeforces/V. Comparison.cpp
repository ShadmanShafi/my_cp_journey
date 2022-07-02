#include <bits/stdc++.h>
using namespace std;

int main()
{
	char b; int a,c; cin >> a >> b >> c;
	if(b == '<') (a<c) ? cout << "Right" : cout << "Wrong";
	else if(b == '>') (a>c) ? cout << "Right" : cout << "Wrong";
	else if(b == '=') (a==c) ? cout << "Right" : cout << "Wrong";

	return 0 ;
}

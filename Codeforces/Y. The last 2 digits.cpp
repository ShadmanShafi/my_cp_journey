#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,d, res; cin >> a >> b >> c >> d;
	a %= 100; b %= 100; c %= 100; d %= 100;

	res = a * b * c * d;
	res %= 100;
	if(res<10) cout << 0 << res << endl;
	else cout << res << endl;

	return 0;
}

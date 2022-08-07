#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long l1,r1,l2,r2; cin >> l1 >> r1 >> l2 >> r2;

	if ((r1 < l2) ||  (r2 < l1)) printf("-1\n");
 	else cout << max(l1, l2) << " " << min(r1, r2) << endl;

	return 0 ;
}

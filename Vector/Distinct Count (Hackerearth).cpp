#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n, x; cin >> n >> x;
		vector<int> arr (n);
		for(int i=0; i<n; i++) cin >> arr[i];

		int unique=0;
		sort(arr.begin(), arr.end());
		for(int i=1; i<=n; i++) {
			if(arr[i] != arr[i-1]) unique++;
		}

		if(unique == x) cout << "Good" << endl;
		else if(unique < x) cout << "Bad" << endl;
		else if(unique > x) cout << "Average" << endl;
	}
	return 0;
}

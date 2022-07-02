#include <bits/stdc++.h>
using namespace std;

int main()
{
   char c; cin >> c ;

	if(c >= 'A' and c <= 'Z') printf("ALPHA\nIS CAPITAL\n");
	else if(c >= 'a' and c <= 'z') printf("ALPHA\nIS SMALL\n");
	else printf("IS DIGIT\n");

	return 0 ;
}

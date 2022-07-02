#include <bits/stdc++.h>
#define    yes         printf("Yes\n")
#define    w          printf("Wrong\n")
using namespace std;

int main()
{
	int a, b, ans; char c ,d;
	scanf("%d %c %d %c %d" , &a , &c , &b , &d , &ans);
	if(c=='+') (ans==a+b) ? yes : printf("%d\n", a+b);
	if(c=='-') (ans==a-b) ? yes : printf("%d\n", a-b);
	if(c=='*') (ans==a*b) ? yes : printf("%d\n", a*b);

	return 0;
}

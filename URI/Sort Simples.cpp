#include <iostream>

using namespace std;
int main()
{
	int a,b,c, small,middle,big;
	int tr;
	
	scanf("%d %d %d", &a, &b, &c);
	small = a;
	middle = b;
	big = c;
	
	if(small  > middle)
	{
		tr = small;
		small = middle;
		middle = tr;
	}
	if(small > big)
	{
		tr = small;
		small = big;
		big = tr;
	}
	if(middle > big)
	{
		tr = middle;
		middle= big;
		big = tr;
	}
	printf("%d\n%d\n%d\n", small, middle, big);
	printf("\n");
	printf("%d\n%d\n%d\n", a, b, c);
	
	return 0;
}

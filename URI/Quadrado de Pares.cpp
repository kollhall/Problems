#include <iostream>

using namespace std;
int main()
{
	int n, p;
	
	cin >> n;
	
	for (p = 1; p <= n; p++)
	{
		if (p % 2 == 0)
		{
			cout << p << "^2 = " << p*p << endl;
		}
	}

	return 0;
}

#include <bits/stdc++.h>
#define long long int;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[6];
		for (int i = 0; i < 5; i++)
		{
			cin >> a[i];
		}
		sort(a, a + 3);
		if ((a[0]<=a[4])&&((a[1]+a[2])<=a[3]))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}
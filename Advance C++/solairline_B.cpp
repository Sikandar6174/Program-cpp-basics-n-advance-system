#include <bits/stdc++.h>
#define long long int;
using namespace std;
int main()
{
	int t;
	cin>>t;
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

			if (a[0]<=10 && a[1]<=10 && a[2]<=10 && a[3]<=20 && a[4]<=10){
				if(a[3]>=15 && a[4]>=5){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}
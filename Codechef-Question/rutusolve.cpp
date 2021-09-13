#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int t;
	// cin >> t;
	// while (t--)
	// {
		long long int count;
		cin >> count;
		long long int array[100000];
		for (long long int i = 0; i < count; i++)
		{
			cin >> array[i];
		}
		sort(array, array + (count), greater<long long int>());
		sort(array, array + (count -1));
        long long int temp=0;
        temp=array[0];
        array[0]=array[count-1];
        array[count-1]=temp;
			for (long long int i = 0; i < count; i++)
		{
			cout<<array[i]<<" ";
		}

		int i = 0;
		long long int array2[100000];
		for (long long int j = 1; j <= count; j++)
		{
			array2[i] = (array[i] + j) % 2;
			i++;
		}
		int sum = 0;
		for (long long int i = 0; i < count; i++)
		{
			sum = sum + array2[i];
		}
		cout << sum << endl;
	// }

	return 0;
}
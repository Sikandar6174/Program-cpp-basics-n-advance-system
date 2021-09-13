#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count, candy, sum = 0;
        cin >> count >> candy;
        long long int array[1000];
        for (int i = 0; i < count; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < count; i++)
        {
            sum += array[i];
        }
        if (candy >= sum)
        {
            cout << "Yes" << endl;
        }
        else if (count > candy || candy < sum)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
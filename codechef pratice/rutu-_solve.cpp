#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int num, a[5000];
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cin >> a[i];
        }
        sort(a, a + num);
        int min = a[1] - a[0];
        for (int i = 2; i < num; i++)
        {
            if (a[i] - a[i - 1] < min)
            {
                min = a[i] - a[i - 1];
            }
        }
            cout << min << endl;
    }

    return 0;
}
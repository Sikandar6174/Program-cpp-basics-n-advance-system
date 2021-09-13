#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        unsigned int count;
        cin >> count;
        unsigned int array[100];

        for (int i = 0; i < count; i++)
        {

            cin >> array[i];
        }
        // if (array[count-1]<array[0])
        // {
        //    sort(array, array + (count));
        // }

        sort(array, array + (count), greater<int>());
        sort(array, array + (count - 1));
        // sort(array, array + (count-2), greater<int>());

        // for (int i = 0; i < count; i++)
        // {

        //     cout << array[i] << " ";
        // }

        short i = 0;
        unsigned int array2[100];
        for (int j = 1; j <= count; j++)
        {
            array2[i] = (array[i] + j) % 2; // 0 0 .......... // 3 2 1 // 3+1 , 2+2 1+3
            i++;
        }

        // for (int i = 0; i < count; i++)
        // {
        //     cout << array2[i] << " ";
        // }
        short sum = 0;
        for (short i = 0; i < count; i++)
        {
            sum = sum + array2[i];
        }
        cout << sum << endl;
    }

    return 0;
}
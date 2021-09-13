#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned short t;
    cin >> t;
    while (t--)
    {

        long long int count;
        cin >> count;
        long long int array[100000];
        for (long long int i = 0; i < count; i++)
        {
            cin >> array[i];
        }
        if (count == 3)
        {

            for (long long int i = 0; i < 1; i++)
            {
                if (array[i] % 2 != 0)
                {
                    if (array[i + 1] % 2 != 0)
                    {
                        if (array[i + 2] % 2 != 0)
                        {
                            sort(array, array + (count), greater<long long int>());
                        }
                        else
                        {
                            sort(array, array + (count), greater<long long int>());
                        }
                    }
                    else
                    {
                        if (array[i + 2] % 2 != 0)
                        {
                            sort(array, array + (count), greater<long long int>());
                            sort(array, array + (count - 1));
                        }
                        else if (array[i + 2] % 2 == 0)
                        {
                            sort(array, array + (count - 1), greater<long long int>());
                        }
                    }
                }
                else if (array[i] % 2 == 0)
                {
                    if (array[i + 1] % 2 == 0)
                    {
                        if (array[i + 2] % 2 == 0)
                        {
                            sort(array, array + (count), greater<long long int>());
                            sort(array, array + (count - 2));
                        }
                        else if (array[i + 2] % 2 != 0)
                        {
                            sort(array, array + (count), greater<long long int>());
                            sort(array, array + (count - 2));
                            long long int temp = 0;
                            temp = array[0];
                            array[0] = array[count - 2];
                            array[count - 2] = temp;
                        }
                    }
                    else if (array[i + 1] % 2 != 0)
                    {
                        if (array[i + 2] % 2 == 0)
                        {
                            long long int temp = 0;
                            temp = array[0];
                            array[0] = array[count - 2];
                            array[count - 2] = temp;
                        }
                        else if (array[i + 2] % 2 != 0)
                        {
                            long long int temp = 0;
                            temp = array[0];
                            array[0] = array[count - 2];
                            array[count - 2] = temp;
                        }
                    }
                }
            }
        }
        else if (count == 2)
        {
            long long int temp = 0;
            temp = array[0];
            array[0] = array[count - 1];
            array[count - 1] = temp;
        }
        else
        {
            sort(array, array + (count - 1), greater<long long int>());
            sort(array, array + (count - 2));
        }

        long long i = 0;
        long long int array2[100000];
        for (long long int j = 1; j <= count; j++)
        {
            array2[i] = (array[i] + j) % 2;
            i++;
        }
        long  int sum = 0;
        for (long long int i = 0; i < count; i++)
        {
            sum = sum + array2[i];
        }
        cout << sum << endl;
    }
    return 0;
}

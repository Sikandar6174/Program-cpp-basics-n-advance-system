#include <bits/stdc++.h>
using namespace std;
int main()
{
    // unsigned short t;
    // cin >> t;
    // while (t--)
    // {
    long long int diff[5000];
    long int count;
    long long int result[5000];
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cin >> diff[i];
    }
    // sort(diff, diff + count);
    for (int i = 1; i < count; i++)
    {
       for (int j =2 ; i <= count; i++)
       {
           result[i]=diff[j]-diff[j-1];
       }
       
    }
    
   

    // }
    return 0;
}
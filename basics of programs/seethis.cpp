#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long arr[3];
        long long d, e;
        cin >> arr[0] >> arr[1] >> arr[2] >> d >> e;

        sort(arr, arr + 3);

        if (e >= arr[2])
        {
            if (arr[0] + arr[1] <= d)
            {
                cout << "YES\n";
                
            }
            else{
                cout<<"NO\n";
            }
        }

        if (e >= arr[1])
        {
            if (arr[0] + arr[2] <= d)
            {
                cout << "YES\n";
               
            }
             else{
                cout<<"NO\n";
            }
        }

        if (e >= arr[0])
        {
            if (arr[1] + arr[2] <= d)
            {
                cout << "YES\n";
               
            }
             else{
                cout<<"NO\n";
            }
        }
        

      
        break;
    }

    return 0;
}

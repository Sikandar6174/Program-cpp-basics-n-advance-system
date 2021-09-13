#include <bits/stdc++.h>
using namespace std;
int pickup()
{
    string user;
    cin >> user;
    if (user[0] == '1')
    {
        user[0] == '0';
        cout << 1 << user << endl;
    }
    else if (user[0] > '1')
    {
        cout << 1 << user << endl;
    }
 
}
int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    while (t--)
    {
        pickup();
    }
    return 0;
}
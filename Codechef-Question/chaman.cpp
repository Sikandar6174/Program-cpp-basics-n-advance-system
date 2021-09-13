#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int num;
        string logo;
        cin >> num;
        logo = to_string(num);
        if (logo[0] == '1')
        {
            long long int abb;
            string pop = to_string(abb);
            pop = '0';
            long long int tpp;
            string popl = to_string(tpp);
            popl = '0';

            pop = logo[0];
            logo[0] = popl[0];
            popl = pop;

            cout << "1" + logo << endl;
        }
        else if (logo[0] > '1')
        {
            cout << "1" + logo << endl;
        }
    }
    return 0;
}
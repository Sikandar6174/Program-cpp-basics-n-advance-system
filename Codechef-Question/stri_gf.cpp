#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int countt = 0;
        string s;
        cin >> s;

        if (s[0] == '<' && s[1] == '/' && s[s.length() - 1] == '>' && s.length()>3)
        {

            for (int j = 2; j < (s.length() - 1); j++)
            {
                if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9'))
                {

                    countt++;
                } //</a>
            }

            if (countt == (s.length() - 3))
            {
                cout << "Success" << endl;
            }
            else
            {
                cout << "Error" << endl;
            }
        }
        else
        {
            cout << "Error" << endl;
        }
    }

    return 0;
}
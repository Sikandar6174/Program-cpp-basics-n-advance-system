

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
     int length;
    length = s.length();
    int a = 0, b = 0;
    for ( int i = 0; i <length; i++)
    {

        if (s[i] == 'z')
        {
            a++;
        }
        else if (s[i] == 'o')
        {
            ++b;
        }
        else if (s[i] != 'o' && s[i] != 'o')
        {
            cout << "No";
            break;
        }

      
    }
      if (2 * a == b)
        {
            cout << "Yes";
           
        }
    if(2*a!=b){
        cout<<"No";
    }
}

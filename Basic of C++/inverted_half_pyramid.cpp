#include <bits/stdc++.h>
using namespace std;
int main()
{
    int design;
    cin >> design;
    int n;
    n=design;
    for (int j = 1; j <=design; j++)
    {
        for (int i = 1; i <=n; i++)
        {
            cout << "* ";
           
        }
        n--;
        cout << endl;
    }
    // OR 
    /*
    for (int i=design; i >=1; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"* ";

        }
        cout<<endl;
        
    } 
     u can use this too done by 2 ways
    */
    
    

    // Inverted Half Pyramid

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    int coln;
    cin >> rows >> coln;
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= coln; j++)
        {
            if ((i == 1 || i == rows) || (j == 1 || j == coln))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    /*
    Working
    now if user input 4 5 
    then loop of i will run then loop of j it will go to if else statement
    if i==1 yeep 
    print * then again * then 
    it will print 5 stars endl;
    now is the twist 
    now i==2 and i is now max so now j==1 then star will print then now j has incr so space will print until j is max
    when j==coln star will print and endl; 
    Let see at the output of 4 5 
    
        * * * * *
        *       *
        *       *
        * * * * *


    
     */

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int size;
   cin>>size;
 int row=1;
    while (row<=size)
    {
        int column=1;
        while (column<=size)
        {
            int product;
            product=row*column;
            cout<<setw(3)<<product<<" " ;
            column++;
        }
        cout<<endl;
        row++;
        
    }
    
   
    return 0;
}
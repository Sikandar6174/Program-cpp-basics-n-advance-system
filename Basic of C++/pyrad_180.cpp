#include <bits/stdc++.h>
using namespace std;
int main()
{
    int enter;
    int pun;
    cin>>enter;
    int n;
    pun =1;
    n= enter;

    for (int i =1; i<=enter; i++) 
    {
        for (int j= 1; j <=n-1; j++)
        {
           cout<<"  ";
           
           
            
        }
        n--;
        for (int k =1; k<=pun; k++)
           {
               cout<<"* ";
           }pun++;
        cout<<endl;

        
    }
    
    return 0;
}

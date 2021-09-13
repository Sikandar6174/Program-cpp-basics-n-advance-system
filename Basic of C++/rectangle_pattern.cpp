#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Rectangle Patttern
    int rows;
    int coln; 
    cin>>rows >>coln;
    for (int i = 1; i <=rows; i++)
    {
       for (int j = 1; j <=coln; j++)
       {
           cout<<"* ";
           
       }
       cout<<endl;
       
       
    }
    // Working ->
    /*
    first of all the first loop of i will run 
    then loop of j will print based on user input for example : 4 5 
    5 is the j so                                               |
    * * * * * will run in j loop                                |
    then again loop of i will run again                         |
    * * * * * will print and this goes for no of rows which is  4
    Ouptut 
    * * * * *
    * * * * *
    * * * * * 
    * * * * * 
    rows = 4  and colums is 5 
    */
    
    return 0;
}

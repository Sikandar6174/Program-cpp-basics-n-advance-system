#include <bits/stdc++.h>
using namespace std;

int main()
{
    string House[5] = {"Saving", "Investment", "Learn", "Funds", "Earning"};
    int Num[5] = {12, 3, 6, 7, 8};
    House[3] = "GodDomain ";
    cout << House[3] << " are " << Num[3] << endl;

    // now we will speak about refrence  in C++
    //refrence
    string place ="Mumbai";
    string &area = place;
    cout<<place<<endl; // Output Mumbai
    cout<<area<<endl; // output Mumbai
    
    // to get Memory address in c++
    cout<<&place<<endl; // in my pc 0x61fe10 is printed depends on each pc based on where the memory is stored //
    



    return 0;
}

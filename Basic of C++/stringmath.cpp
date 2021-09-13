#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    // let talk about string in this concept
    string Name = "Sikandar";
    string lastname = " Bhide";
    string fullname = Name + lastname;
    cout << fullname << endl;
    // other method to add name is to use Append Function
    cout << Name.append(lastname) << endl;
    // add some flavours in string
    // to check the length of string
    cout << fullname.length() << endl;
    // to manipulate the string
    Name[0] = 'B';
    cout << Name << endl; // output -> Bikandar // as we changes the name
    // input in string 
    string Name_1;
    // cin>>Name_1; 
    // this only takes first word in input for example -> Sikandar 
    // but if we input 'I m sikandar' it will print only 'I'
    //to get full line use getline()
    getline(cin,Name_1);


    return 0;
}
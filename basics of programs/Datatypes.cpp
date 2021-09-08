#include <iostream>
using namespace std;
int main()
{
    int Mark1, Mark2;
    Mark1 = 50;
    Mark2 = 20;
    char total = 'b';
    float area ;
    double Volume = 100.00;
    // Modiefiers in C++
    /*
    Signed 4byte -  
    Unsigned  4byte-
    short 2 Bytes-
    Long  altest 4 bytes-
    Long long - 8 bytes -
    unsigned long long - for large positive integer 

    */
   cout<< " Area : ";
   cin>>area;
   
    cout << " Helluuu this is my first C++ program to run" << endl;

    cout << Mark1 + Mark2 << endl;
    cout << area << endl;
    cout << Volume - area << endl;
    cout << " Charater : " << total << endl;
    cout << "To know the size of function of area "<<sizeof(area)<<endl;

    int user;
    cout<<" Assign Value : ";

    cin>>user;
    cout<<" The value is : " <<user<<endl;


    return 0;
}
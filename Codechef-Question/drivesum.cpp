#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
     int arr[100];
        int arrSize = sizeof(arr)/sizeof(arr[0]);
        int sum=0;
        for (int i =0; i<arrSize;i++) {
            sum+=arr[i];
        }
        cout<<sum<<endl;
 
 

}
return 0;
}
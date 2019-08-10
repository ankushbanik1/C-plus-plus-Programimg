#include<iostream>

using namespace std;


int main()
{
     int n,a=2,d=5,ans;
     cin>>n;
     for ( int i = 1; i < n; i++)
     {
       ans+=a+(n-1)*d;

      cout<<i<<" ";
     }

    return 0;

}

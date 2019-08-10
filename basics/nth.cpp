#include<iostream>

using namespace std;


int main()
{
    int n,i,a=5,d=3,sn=0,an=0;
     cin>>n;
     for (  i = 1; i < n; i++)
     {
         an=a+((n-1)*d);



      cout<<"Term"<<i<<"= "<<an <<endl;
      sn=sn+an;
    }
cout<<"sum= "<<sn<<endl;
    return 0;

}

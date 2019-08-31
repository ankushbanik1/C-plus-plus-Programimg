#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number of the Array";
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)

        {
            cin>>a[i];


    }
    cout<<"Enter the value u want to search";
   int j;
   cin>>j;
   for(int i=0;i<n;i++){
    if(j==a[i])
    {
cout<<"Your value is in the index of"<<i;
        break;
    }

   }
   if(j<n){
    cout<<"Its not present";
   }
    return 0;
}

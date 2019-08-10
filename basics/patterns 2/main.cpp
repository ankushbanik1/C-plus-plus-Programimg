#include <iostream>

using namespace std;

int main()
{
    int k=1,n;
    cout<<"Enter a value of Row:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
        }
        cout<<endl;
    }
}

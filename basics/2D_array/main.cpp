#include <iostream>

using namespace std;

int main()
{
    int arra[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arra[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arra[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}

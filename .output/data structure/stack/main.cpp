#include <iostream>
#define Maxsize 10
using namespace std;
int stack[Maxsize];
int Top=-1;

void push(){
    int ele;
    if(Top==Maxsize-1)
        cout<<"Stack is overflow"<<endl;

    else{
            cout<<"Enter Your Element"<<endl;
           cin>>ele;
           Top=Top+1;
           stack[Top]=ele;
    }


}

void pop(){
    int k;
if(Top==-1)
{

    cout<<"Element is under flow";

}else{
k=stack[Top];
cout<<"Deleting Element it "<<k<<endl;
Top=Top-1;
}
}
void topelement(){
cout<<"The top most element is:"<<stack[Top]<<endl;

}

void display(){
    if(Top==-1)
{

    cout<<"Element is under flow"<<endl;

}


for (int i=0;i<=Top;i++){
    cout<<stack[i]<<endl;
}
}


int main()
{
    int choice;
    do{


cout<<"1. push"<<endl;
cout<<"2. pop"<<endl;
cout<<"3. top"<<endl;
cout<<"4. display"<<endl;

cin>>choice;
switch(choice)
{


case 1:
    push();
    break;

case 2:
    pop();
    break;
case 3:
    topelement();
    break;
case 4:
    display();
    break;
}
}while(choice<=4);
    return 0;
}

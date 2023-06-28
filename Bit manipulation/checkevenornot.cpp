#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    //we have to check the given number a is even or odd...
    int z=a&(1<<0);
    if(z!=0)
    {
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    //using or
    // a=a|(1<<b);
    //using xor;
    int z=a^(1<<b);
    if(z<a)
    {
        cout<<z<<endl;
    }
    else{
        cout<<a<<endl;
    }
    
    //cout<<a<<endl;
    return 0;
}
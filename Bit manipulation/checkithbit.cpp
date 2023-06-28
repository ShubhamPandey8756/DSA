/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool check(int n,int i)
{
    //by using and
    // int z=n&(1<<i);
    // if(z)
    // {
    //     return true;
    // }
    // else
    // return false;
    
    //by using or
    //simple perform the or on the bit and check if OR-ed result is nonZero simply return as unset else set> ;
    cout<<(1/(1>>i))<<endl;
    int z=n|(n/(n>>i));
    if(z==n)
    {
        return true;
    }
    else
    return false;
    //using xor operator 
    //int z=
}

int main()
{
    
    int a=8;
   // cout<<check(a,3);
        cout<<(1/(1>>3))<<endl;
    return 0;
}

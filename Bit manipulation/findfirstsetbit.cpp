/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int countBits(int number)
{    
    
    // log function in base 2
    // take only integer part
    return (int)log2(number)+1;
}
  
// Driven program    
int main()
{
    int num;
    cin>>num;
    int ans;
    int digits=countBits(num);
    for(int i=0;i<digits;i++)
    {
        int z=num&(1<<i);
        if(z!=0)
        {
          ans=1<<i;
          break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
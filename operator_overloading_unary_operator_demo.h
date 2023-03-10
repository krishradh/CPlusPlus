/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Distance
{
    public:
    int feet,inches;
    //Constructor for Distance
    Distance(int f=0,int i=0)
    {
        feet = f;
        inches =i;
    }
    
    void operator-()
    {
      feet--;
      inches--;
    }
    
};



int main()
{
    
    Distance d1(15,25), d2(22,33);
    cout<<"Given feet and inches are"<<d1.feet<<"\t"<<d1.inches;
    -d1;
    -d2;
    -d1;
    cout<<"\n After calling -d1 feet and inches are: "<<d1.feet<<"\t"<<d1.inches;
    cout<<"\n After calling -d2 feet and inches are: "<<d2.feet<<"\t"<<d2.inches;
    return 0;

}




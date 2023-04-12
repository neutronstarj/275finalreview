//this is for pointers review and struct 

#include <iostream>
using namespace std;
struct point{
    int x;
    int y;
    bool onaxis(int x,int y);
};
bool onaxis(int a, int b)
{
    if(a==0)
    {return true;}
    else if (b==0)
    {return true;}
    else
    {return false;};

};
// few comments to struct 
//use dot operator and this pointer to access members
//----------------------------------------------------------------------------//



//pointer to const==read only
//const int * i_ptr = &steps;

//reference variable (aliasing)
//only use & (address of)
//* is content at the pointing address


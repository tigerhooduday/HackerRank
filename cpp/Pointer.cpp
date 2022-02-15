//HackerRank Code for cpp
//Functions
//TigerhoodUday

#include <iostream>
using namespace std;
int fun(int *a, int *b)
{
    int k, l;
    k = *a+*b;
    l=*a-*b;
    if(l<0)
    {
        l=-l;
    }
    cout <<k<<endl;
    cout <<l<<endl;
    return 0;
}
int main()
{
   int a, b;
   cin>> a>> b;

   fun(&a, &b);
    return 0;
}

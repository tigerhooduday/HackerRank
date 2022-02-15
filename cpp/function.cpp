//HackerRank Code for cpp
//Functions
//TigerhoodUday

#include <iostream>
using namespace std;
int fun(int a, int b, int c, int d)

{
    int temp = 0;
    int arr[4]={a,b,c,d};
    for(int i=0;i<=4; i++)
    {
        if(temp<arr[i])
        {
            temp =arr[i];
        }

    }
    return temp;
}
int main()
{
   int a, b, c, d;
   cin>> a>> b>> c>> d;

   cout<<fun(a, b, c, d);
    return 0;
}

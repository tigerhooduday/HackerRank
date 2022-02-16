/HackerRank Code for cpp
//array_Introducton
//TigerhoodUday

#include <iostream>
using namespace std;

int main()
{
   int num, n;
   cin >> num;
   n= num-1;
   int array[n];
   for(int a =0; a<=n; a++)
   {
       cin >> array[a];

   }
   for(int a =n; a>=0; a--)
   {
       cout<<array[a]<< " ";


   }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int t, a, b, diff, div, mod;

   cin >> t;

   while(t--)
   {
       cin >> a >> b;

       diff = abs(a - b);

       div = 0;

       int curr =10;

       for (int i = 10; i > 0; i --)
       {
           if ( i <= diff)
           {
               div = (diff/i);
               mod = diff % i;

               if ( mod == 0) break;

               else
               {
                 if ( mod >= 1 && mod <=10)
                  {
                   div++;
                   break;
                  }
               }
            }
        }

       cout << div << '\n';
   }

   return 0;
}


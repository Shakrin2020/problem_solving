#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int k, r, diff, div, cnt =0;

       cin >> k >> r;

       for (int i = 1; i <=1000; i++)
           {
               int val = k*i;

               div = val % 10;

               if ( div == 0 || div ==r)  // 10 diye nishsheshe vag hole, othoba r er poriman jodi vag shesh thake
               {
                   cnt = i;
                   break;
               }

           }
    cout << cnt ;

   return 0;
}


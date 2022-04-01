#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, num ;

   cin >> n;

   for (int i =0; i < n; i++)
   {
       cin >> num;

       if ( num % 2 == 0 ) cout << ( num /2) - 1 << '\n';

       else cout << ( num /2)  << '\n';
    }

   return 0;
}

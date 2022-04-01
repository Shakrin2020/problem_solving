#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int t, a, b;

   cin >> t;

   while (t--)

   {
       cin >> a >> b;

       if ( a % b == 0) cout << 0 << '\n';

       else cout << (b - (a % b)) << '\n';  // vag kora  na gele, vag sheshe ja ache, shei shongkha tai,  a er sathe jog kora dorkar vag korte parar jonno
   }

   return 0;
}

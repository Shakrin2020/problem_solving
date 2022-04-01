#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int  n,m, l, r, enem, dis, cnt =0;

       cin >> n >> m >> l >> r;

       enem = n;

       while (n--)
       {
           cin >> dis;

           if (dis >= l && dis <= r)
           {
               cnt++;
               m--;
           }

           else
           {
               m -=2;
               if (m < 0) break;
               else cnt++;
           }

           if ( m < 1 ) break;
        }


        if (cnt == enem) cout << "lzdak!";

        else cout << cnt++;

        return 0;
}

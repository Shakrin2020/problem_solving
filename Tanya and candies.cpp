#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int  n, evsum, odsum, cnt =0;

       cin >> n;

       vector < int> v(n);
       vector < int> ev(n);
       vector < int> od(n);

       fill(ev.begin(), ev.end(), 0); /// now all the index values are 0
       fill(od.begin(), od.end(), 0);

       for (int i =0; i < n; i++) cin >> v[i];

       od[0] += v[0];
       od[1] += v[0];
       ev[1] += v[1];

       for (int i =1; i <= n; i++)
       {
           if ( i % 2 != 0)

            {
               ev[i] = ev [i-1] + v[i];
               ev[i+1]= ev[i];
            }

            else

            {
              od[i] = od[i-1] + v[i];
              od[i+1]= od[i];
            }
       }

       for (int i =0; i < n; i++)
       {
           if (i == 0)
           {
               evsum = ev[n - 1];
               odsum = od[n - 1] - od[0];
           }

           else
           {
               evsum = ev[i-1] + od[n-1] - od[i];
               odsum = od[i-1] + ev[n-1] - ev[i];

           }

           if (evsum == odsum) cnt++;
       }

       /*for (auto u:ev) cout << u << " ";
       cout << '\n';
       for (auto u:od) cout << u << " ";*/

       cout << cnt;

        return 0;
}

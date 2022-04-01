#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   vector <int> v;

   int k, l, m, n, d, cnt=0;
   int kk=0, ll=0, mm=0, nn=0;

   cin >> k >> l >> m >> n >> d;

   if ( k== 1 || l == 1 || m== 1 ||  n == 1 ) cout << d;

   else
   {
       for (int i = 1; i <= d; i++)
      {
       kk += k;
       ll += l;
       mm += m;
       nn += n;

      if (kk <= d) v.push_back(kk);
      if (ll <= d) v.push_back(ll);
      if (mm <= d) v.push_back(mm);
      if (nn <= d) v.push_back(nn);
      }

      sort (v.begin(), v.end());
      int sz = unique (v.begin(), v.end())- v.begin();

      cout << sz;
   }

   return 0;

}

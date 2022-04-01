#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int t, n, num, diff, mn, cnt = 0 ;

   vector <int> v;

   cin >> t;

   while (t--)
    {
       cin >> n;

       for (int i = 0; i < n; i++)
       {
          cin >> num;
          v.push_back(num);
       }

       sort(v.begin(), v.end());
       bool flag = true;

       for (int i = 0; i < n-1; i++ )
          {

           if ( v.size() == 1) break;

           else
           {
             diff = v[i+1] - v[i];

              if ( diff > 1)
              {
                  flag = false;
                  break;
              }
           }

        }

       if (flag) cout << "YES"<< '\n';

       else cout << "NO"<< '\n';

       v.clear();

    }

   return 0;
}


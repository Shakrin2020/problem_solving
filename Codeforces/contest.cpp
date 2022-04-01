#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       vector <int> v;

       double t, a, b, c, d;
       double s, area;

       cin >> t ;

       while(t--)
       {
           cin >> a >> b >> c >> d;

           v.push_back(a);
           v.push_back(b);
           v.push_back(c);
           v.push_back(d);


       sort (v.rbegin(), v.rend());

       double x = v[0];

       double y = v[1];

       double z = v[2];

       s = double((x+y+z))/2;

       area = double(sqrt(s*(s-x )* (s-y)* (s-z)));

       cout  << setprecision(2)  << area << '\n';

       v.clear();

       }

   return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int n, p, q;

       cin >> n;

       while (n--)
       {
           cin >> p >> q;

           bool flag = true;

           for ( int i = 3; i < sqrt(q); i++)
           {
               if (q/i == 0 && i !=5)
                {
                   flag = false;

                   break;
               }
           }

           if (flag) cout << "Yes" << '\n';

           else cout << "No" << '\n';
       }
       return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int a, b, mn, cnt =0 ;

   cin >> a >> b;

   mn = min (a, b);  // min will be the total days

   a -= mn;

   b -= mn;

   while ( a > 1)
       {
         a -= 2;   // ( -2 ) bcz 2 socks = 1 pair
         cnt++;
       }

    while ( b > 1)
       {
         b -= 2;
         cnt++;
       }

   cout << mn << " " << cnt;

   return 0;
}


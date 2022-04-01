#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, k, sum =0, cnt =0 ;

   cin >> n >> k;

   int remain = 240 - k;

   for ( int i =1; i <= n; i++)
   {
       sum += 5*i;

       if (sum <= remain) cnt++;
   }

   cout << cnt;

   return 0;
}

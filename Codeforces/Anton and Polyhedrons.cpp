#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, cnt =0;
   string s;

   cin >> n;

   for (int i =0; i < n; i++)
   {
       cin >> s;

       if (s[0] == 'T') cnt += 4;

       if (s[0] == 'C') cnt += 6;

       if (s[0] == 'O') cnt += 8;

       if (s[0] == 'D') cnt += 12;

       if (s[0] == 'I') cnt += 20;
    }

   cout << cnt;

   return 0;
}

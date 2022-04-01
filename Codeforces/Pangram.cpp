/*#include<bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   //freopen("input.txt", "r", stdin);

   string str;

   int n;

   cin >> n >> str;

   if (n < 26) cout << "NO";

   else
   {
     boost::to_lower(str);

     sort (str.begin(), str.end());

     int sz = unique (str.begin(), str.end()) - str.begin();

     if (sz == 26) cout << "YES";
     else cout << "NO";
   }

   return 0;
}*/

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   string str;

   int n;

   cin >> n >> str;

   if (n < 26) cout << "NO";

   else
   {
     for (int i= 0; i <n; i++)
     {
         str[i] = tolower(str[i]);
     }

     sort (str.begin(), str.end());

     int sz = unique (str.begin(), str.end()) - str.begin();

     if (sz == 26) cout << "YES";
     else cout << "NO";
   }

   return 0;
}

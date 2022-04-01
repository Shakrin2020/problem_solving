#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, cnt =0;

   string s1, s2, s3;


   cin >> s1 >> s2 >> s3;

   s1 +=s2;

   sort (s1.begin(), s1.end());

   sort (s3.begin(), s3.end());

   if ( s1 == s3) cout << "YES";

   else cout << "NO";

   return 0;
}

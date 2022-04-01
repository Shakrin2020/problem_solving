#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   vector <int> v;
   int num;

   for (int i = 0; i < 4; i++)
   {
       cin >> num;
       v.push_back(num);
   }

   sort (v.begin(), v.end());
   int sz = unique (v.begin(), v.end()) - v.begin();

   cout  << 4-sz;
   return 0;

}

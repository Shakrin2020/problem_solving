#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   vector < pair <int, int> > v ;
   int n, h, a, cnt = 0;

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> h >> a;
      v.push_back({h, a});
   }

   for (int i = 0; i < n-1 ; i++) // (n-1) cause j = i+1. when i = n-1, then j = n, which exceed the index
   {
       for (int j = i+1; j < n ; j++)
       {
           if (v[i].first == v[j].second) cnt++;
           if (v[j].first == v[i].second) cnt++;
       }
    }

   cout << cnt;

   return 0;

}


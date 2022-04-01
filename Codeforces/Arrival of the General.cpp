/*#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   vector <int> v1;
   int n, num, mx=0, mn=0;

   cin >> n;

   while (n--)

   {
       cin >> num;
       v1.push_back(num);
   }

   vector <int> v2 (v1);

   sort (v2.begin(), v2.end(), greater<int>());

   int sz = unique (v2.begin(), v2.end()) - v2.begin();

   for (int i = 0; i < v1.size(); i++)
   {
       if (v2[0] == v1[i])
       {
           mx =i;
           break;
       }

       //cout << "max " << " "<< mx << '\n';
   }
   cout << "max " << " "<< mx << '\n';

   for (int i = 0; i < v1.size(); i++)
   {
       if (v2[sz-1] == v1[i]) mn = (sz-1) - i;
      // cout << "min " << " "<< mx << '\n';

   }
    cout << "min " << " "<< mx << '\n';

   //cout << mx+mn;
   return 0;
}*/

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   vector <int> v;
   int n, num, posT, posS, time, mx=0, mn=101;

   cin >> n;

   while (n--)

   {
       cin >> num;
       v.push_back(num);
   }

   for (int i = 0; i < v.size(); i++)
   {
       if (v[i] > mx)
       {
           mx = v[i];
           posT =i;


       }

       if (v[i] <= mn)
       {
           mn = v[i];
           posS=i;
       }
   }

   if (posS < posT) time = posT + (v.size() -1 - posS) -1; // max jkhn 0 index e chole ashbe tkhn min right side e ek ghor shift hobe, tai -1

   else time = posT + (v.size() -1-posS); // extra -1 dite hobe na, karon already min value right e ache max er, tai max value onnoder sathe swap krbe, min er shifting hobe na.

   cout << time ;

   return 0;
}

































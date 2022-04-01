#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, num, crime =0, hired =0 ;

   cin >> n;

   while (n--)
   {
      cin >> num;

      if ( num == -1)
      {
          if (hired > 0 ) hired -= 1; // if crime found and there is availble police then decrese police by 1

          else crime++;   // if there is  no police then crime increaed by 1 for being untreated
      }

      else hired += num;   // if crime not found, this is positive number of new police
   }

   cout << crime ;

   return 0;
}


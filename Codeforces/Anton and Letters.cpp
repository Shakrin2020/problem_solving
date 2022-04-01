#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int arr[30];
   int cnt = 0;
   string str;

   getline( cin, str ) ;
   memset(arr,0,sizeof(arr));

   for (int i = 1; i < str.size()-1; i++)  /// first index [0] and last index [str.size()-1] have no alphabet. they are braces, we already know.
   {
       if (str[i] >= 'a' && str[i] <= 'z') arr[str[i] - 'a']++;

   }

   for (int i = 0; i < 26 ; i++)
   {
       if (arr[i]) cnt++;
   }
   cout << cnt;

   return 0;

}


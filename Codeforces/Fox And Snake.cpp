#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, m ;

   cin >> n >> m;

   char arr[n][m];
   memset(arr, '.', sizeof(arr));

   for ( int i =3; i < n-1; i+=4)   arr[i][0] = '#'; // to left most col fillup

   for ( int i =1; i < n-1; i+=4)  arr[i][m-1] = '#'; // to right most col fillup


   for (int i =0; i <n ; i+=2)    // to top to bottom row fillup

   {
        for (int j =0; j < m; j++)  arr[i][j] = '#';

   }

   for (int i =0; i <n ; i++) // printing array
   {
        for (int j =0; j < m ; j++)  cout << arr[i][j];

        cout << '\n';
   }

   return 0;
}

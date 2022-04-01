#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int n, cnt =0;

   cin >> n;

   while ( n > 0 )
   {
       while ( n > 0 )  // two while loops bcz 1 break will destroy whole loop and execute cout
       {
            if ( n >= 100)
         {
           n-= 100;
           cnt++;

           break;
         }

       if ( n >= 20)
        {
           n-= 20;
           cnt++;

           break;
       }

       if ( n >= 10)
       {
           n-= 10;
           cnt++;

           break;
       }

       if ( n >= 5)
       {
           n-= 5;
           cnt++;

           break;
       }

       if ( n >= 1)

       {
           n-= 1;
           cnt++;

           break;
       }
     }
}

    cout << cnt ;

    return 0;
}

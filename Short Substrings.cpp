#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int  t;

       cin >> t;

       while(t--)
       {
           string s;

           cin >> s;

           if (s.length() == 2) cout << s;

           else
           {
               cout << s[0] << s[1] ;

               for (int i =3; i < s.length(); i+=2) cout << s[i];
           }
         cout << '\n';
       }

        return 0;
}

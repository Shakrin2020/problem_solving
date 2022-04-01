/////////AAAAAAAAAAAAAA

/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

     long long n1, n2;

    while (cin >> n1 >> n2)
    {
        if (n2 > n1)cout << n2 - n1 << '\n';

        else cout << n1 - n2 << '\n';
    }

    return 0;
}*/


////////////BBBBBBBBBBBBBBB

/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int v, t, s;

    while (cin >> v >> t)
    {
        s = 2*v*t;

        cout << s << '\n';
    }

    return 0;
}*/


/////////////CCCCCCCCCCCCCc

/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n, f, a, b, c, sum;

    while (cin >> n)
    {
        for (int i = 0; i <n; i++)
        {

           sum = 0;
           cin >> f;

           for (int j = 0; j <f; j++)
           {
               cin >> a >> b >> c;

               sum += a*c;
           }

            cout << sum << '\n';
        }
    }

    return 0;
}*/

//////////////DDDDDDDDDDDDD

/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

   freopen("input.txt", "r", stdin);

   string s1, s2;

   while(getline(cin, s1))
   {
       for (int i =0; i< s1.length(); i++)
    {
       int val = int(s1[i]) - 7 ;
       cout << char (val);
    }
    cout << '\n';
   }



    return 0;
}*/

/*string input("geeks\tfor\tgeeks");
    vector<string> result;
    boost::split(result, input, boost::is_any_of("\t"));

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << endl;



#include <boost/algorithm/string.hpp>
std::string inputString("One!Two,Three:Four");
std::string delimiters("|,:");
std::vector<std::string> parts;
boost::split(parts, inputString, boost::is_any_of(delimiters));*/


#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();
   int cnt =0;
   bool flag = false;
   string s;

   while(getline(cin, s))
    {

     for (int i =0; i < s.length(); i++)
     {
         if (s.length() == 0) cout << 0;
         if ( (s[i] >=65 && s[i] <= 90) || (s[i] >=97 && s[i] <= 122)) continue;

         else
         {

             for (int j =i+1; j < s.length(); j++)
             {

                if ( (s[j] >=65 && s[j] <= 90) || (s[j] >=97 && s[j] <= 122))
                {
                 cnt++;
                 i = j -1;
                 break;

                }

                else continue;

             }
             //cout << i << " " << cnt << '\n';
         }
     }

      cout << cnt+1 << '\n';
      cnt = 0;

   }
    return 0;
}



















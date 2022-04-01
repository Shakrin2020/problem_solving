#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int t, num, cnt = 1 ;

       cin >> t;

       while (t--)
       {
            cin >> num;
            vector <int> v;
            bool flag= true;

            if ( (num > 0 && num < 11) ||( num == 10000))
            {
                cout << 1 << '\n';
                cout << num << '\n';
                flag = false;
            }

            if ( (num > 1000))
            {
                v.push_back( 1000*(num/1000));
                num = num % 1000;
            }

             if ( (num > 100))
            {
                v.push_back( 100*(num/100));
                num = num % 100;
            }

            if ( (num > 10))
            {
                v.push_back( 10*(num/10));
                num = num % 10;
            }

            if ( (num > 0) && num !=10000) v.push_back( num);

            if (flag)
            {
             cout << v.size() << '\n';
             for (auto u:v) cout << u << " ";
             cout << '\n';
             v.clear();
            }
       }

       return 0;
}

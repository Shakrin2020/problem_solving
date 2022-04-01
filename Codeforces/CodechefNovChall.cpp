/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t, x, y, a, b, k;

    cin >> t;

    while (t--)
    {
        cin >> x >> y >> a >> b >> k;

        while (k--)
        {
            x += a;
            y += b;
        }

        if ( x > y) cout << "DIESEL" << '\n';
        else if ( x < y) cout << "PETROL" << '\n';
        else cout << "SAME PRICE" << '\n';
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t, x, y;

    cin >> t;

    while (t--)
    {
        cin >> x >> y ;

        if  ( (x > 0 || y > 0) && (x  % 2 == 0)) cout << "YES" << '\n';

        else cout << "NO" << '\n';
    }

    return 0;
}

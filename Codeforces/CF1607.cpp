#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    vector < pair <char , int > > v;

    string s1, s2;

    int t, dis, n = 26;

    cin >> t;


    for (int i = 0; i < t; i++)
    {
        cin >> s1 >> s2;

        for (int i = 0; i < n; i++) v.push_back({s1[i], i});

        for (int i = 0; i < s2.length() - 1 ; i)
        {
            int lo1 = lower_bound(s1.begin(), s1.end(), s2[i]) - s1.begin();
            int lo2 = lower_bound(s1.begin(), s1.end(), s2[i+1]) - s1.begin();

            dis+= abs(lo1 - lo2);
        }

        cout << dis << '\n';

    }

    return 0;
}

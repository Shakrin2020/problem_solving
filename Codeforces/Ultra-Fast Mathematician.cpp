#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    string s1, s2;

    cin >> s1 >> s2;

    for (int i =0; i< s1.length(); i++)
    {
        if(s1[i]== s2[i]) s1[i] = '0';

        else s1[i] = '1';
    }

    cout << s1;

    return 0;
}

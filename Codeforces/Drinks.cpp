#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n, num;
    double sum =0;

    cin >> n;

    for (int i =1; i <= n; i++)

    {
        cin >> num;

        sum +=num;

    }
     cout <<fixed<<setprecision(12)<<sum/n;

    return 0;
}




















#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n, num, arr1[105], arr2[105];

    cin >> n;

    for (int i =1; i <= n; i++)

    {
        cin >> arr1[i];

        arr2[arr1[i]] = i;

    }

     for (int i =1; i <= n; i++) cout << arr2[i] << " ";

    return 0;
}

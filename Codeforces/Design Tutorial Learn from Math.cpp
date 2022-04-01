#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int  num, n1, n2, cnt = 1 ;

       bool flag;

       cin >> num;

        if (num % 2 == 0) cout << 4 << " " << num - 4 ; // even primary number only 2

        else cout << 9 << " " << num -9 ; // odd, 11 = 9 + 2; 2 is a prime number... But num starts from 12


        return 0;
}

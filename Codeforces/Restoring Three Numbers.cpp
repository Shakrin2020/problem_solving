/*#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int arr[4];

       int a, b, c, abc, ab, ac, bc, acab, cbbc ;

       cin >> ab >> ac >> bc >> abc;

       arr[0] = ab;
       arr[1] = ac;
       arr[2] = bc;
       arr[3] = abc;

       sort(arr, arr+4);

       ab = arr[0];
       ac = arr[1];
       bc = arr[2];

       acab = ac - ab;   // a + c - a - b = c - b;
       cbbc = acab + bc;  // c - b + b + c = 2c;

       c = cbbc/2;        // c = 2c/2;

       b = c - acab;      // c - b = acab

       a = arr[3] - b - c;  // a = (a + b + c) - b - c

       cout << a << " " << b << " " << c ;

       return 0;
}*/



#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       int arr[4];

       int a, b, c, abc, ab, ac, bc, acab, cbbc ;

       cin >> ab >> ac >> bc >> abc;

       arr[0] = ab;
       arr[1] = ac;
       arr[2] = bc;
       arr[3] = abc;

       sort(arr, arr+4);

       c =  arr[3] -  arr[0];

       b =  arr[3] -  arr[1];

       a =  arr[3] -  arr[2];

       cout << a << " " << b << " " << c ;

       return 0;
}


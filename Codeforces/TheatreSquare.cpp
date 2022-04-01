#include<bits/stdc++.h>
using namespace std;
typedef long long LL;


int main ()
{
   LL a,b,c, x,y,ans;
    cin>> a >> b >> c ;

    x=(a+c-1)/c;
    y=(b+c-1)/c;

    ans=x*y;

    cerr<< x<< " "<<y<<"\n";

    cout<< ans;

    return 0;
}

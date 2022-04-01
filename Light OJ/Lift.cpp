#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases, m, l, time;
    int ud=4, oc=3, enex=5;

    scanf("%d", &cases);

    for(int casenum=1; casenum <= cases; casenum++)
    {
        scanf("%d %d", &m, &l);
        if(-1<l && l<101 && 0<m && m<101)
        {
           int diff= abs((l-m));
          time=diff*ud+oc+enex+oc+(m*4)+oc+enex;

        printf("Case %d: %d\n", casenum, time);
       }
    else
        break;
    }
return 0;
}

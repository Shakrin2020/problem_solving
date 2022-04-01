#include<bits/stdc++.h>
#define Pi 2.0*acos(0.0)
using namespace std;

int main()
{   double r, dia, sqr, cir, diff;
    int cases;
    scanf("%d", &cases);

   for(int casenum=1; casenum<=cases; casenum++)
   {
    scanf("%lf", &r);

    dia=2*r;
    sqr= dia*dia;
    cir=Pi*r*r;
    diff= sqr-cir;
    printf("Case %d: %.2lf\n", casenum, diff);
   }
return 0;
}

#include<bits/stdc++.h>
using namespace std;

void brush()
{
    int cases, stus, dust;
    scanf("%d", &cases);

    for(int casenum=1; casenum <= cases; casenum++)
    {
        scanf("%d", &stus);
        unsigned long long int sum=0;

          for(int stunum=1; stunum <= stus; stunum++)
        {
            scanf("%d", &dust);
          if(dust<0)
             {
              continue;
             }
            else
             {
                 sum+=dust;
             }
        }
           printf("Case %d: %d\n", casenum, sum);
     }
}
    int main()
    {
        brush();
    }




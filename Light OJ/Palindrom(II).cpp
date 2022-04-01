#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    int cases, i=1;
    scanf("%d", &cases);

    for(int casenum=1; casenum <= cases; casenum++)
    {
          LL num,temp,sum=0;
          scanf("%lld", &num);
          temp=num;
          while(num!=0)
          {
              sum=sum*10+num%10;
              num/=10;
          }

       if (temp==sum)
         {
            printf("Case %d: Yes\n", casenum);
         }

         else
         {
            printf("Case %d: No\n", casenum);
         }
    }

      return 0;
   }







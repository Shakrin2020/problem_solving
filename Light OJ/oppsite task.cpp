#include <bits/stdc++.h>
using namespace std;

    int main()
    {
       int cases, n, add;
         int dup =-1;
     int arr[21]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

        scanf("%d", &cases);

        for(int caseno=1; caseno <= cases; caseno++)
        {
            scanf("%d", &n);
if(n==0)
    {
       printf("0 0\n");
    }
else if(n==20)
    {
       printf("10 10\n");
    }
else if(0<n && n<11 )
     {   if(dup =!n)
       {
           printf("%d %d\n",arr[n], (n-arr[n]));
            dup=n;
        }
           else
           {
               add=arr[n]++;
               printf("%d %d\n",add, (n-add));
           }
    }

else
{
    printf("%d 10\n",(n%10));
}

    }
        return 0;
}

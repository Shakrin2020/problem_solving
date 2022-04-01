#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, arr1[3], arr2[3], diff, amount=0;

    for (i=0; i<3; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (j=0; j<3; j++)
     {
       scanf("%d", &arr2[j]);
     }
    for (k=0; k<3; k++)
    {
        diff= arr2[k]-arr1[k];

        amount=amount+max(0, diff);
    }
       printf("%d", amount);
      return 0;
}

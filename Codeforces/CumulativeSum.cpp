#include<bits/stdc++.h>
using namespace std;
#define MAX 100005

int a[MAX], c_sum[MAX];

void init(int n)
{
     c_sum[0] = a[0];

     for(int i=1; i<n; i++)
      {
          c_sum[i] = c_sum[i-1] + a[i];
      }
}
 int solve(int i, int j)
{    int sum = c_sum[j];

     if(i>0)
        sum = sum - c_sum[i-1];
     return sum;
}
int main ()
{  //freopen("input.txt","r",stdin);
    int n,q,i,j;
    cin>> n;
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
    init(n);
    cin>>q;

    for(int x=1; x<=q; x++)
    {
       cin >> i >> j;
       cout << solve(i, j) <<"\n";
    }
  return 0;
}

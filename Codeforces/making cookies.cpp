#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main ()
{
    optimize();

    int n, k, flag =0, cnt =0;
    int arr1[1001], arr2[1001];

    cin >> n >> k;

    for (int i=0; i<n; i++)  cin >> arr1[i];
    for (int i=0; i<n; i++)  cin >> arr2[i];

    for (int i = 0; i<100000000; i++)
    {

        for (int j = 0; j<n; j++)
        {



            if ( (arr2[j] < arr1[j]) )
            {


                int diff = arr1[j] - arr2[j];


                if (k >= diff)
                {
                    arr2[j] += diff;
                    k -=diff;
                }

                else
                {
                    flag = 1;
                    break;
                }
             }

            else  arr2[j] -= arr1[j];

            //if (k == 0 && arr2[i] ==0) flag =1;



         }
         //if (k == 0) flag =1;

         if(flag==1) break;

         cnt++;

         //cout << i << " " << cnt << '\n';

     }

    cout << cnt;

    return 0;
}

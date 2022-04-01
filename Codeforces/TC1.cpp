#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


 /*bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= sqrt(num ); i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
} */

int main()
{
    optimize();

    /*int n, cnt = 1, flag;
    int  arr[n];

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> arr[i];

        if (isPrime(arr[i]))
        {
           break;

           cout << 1;

           return 0;
        }
    }

    for (int i=0; i<n; i++)

      {
            for (int j=2; j<sqrt(arr[i]); j++)

               {
                   if ((arr[i] % j!= 0) break;
               }

               cnt++;
       }



    }

    cout << cnt;

    return 0;
}
*/

  int q, n, num;

  vector <int> v;

  cin >> q;


  for (int i =0; i<q; i++)
  {
      cin >> n;

      for (int i =0; i<4*n; i++)
  {


      cin >> num;

      v.push_back(num);

   }

      sort (v.begin(), v.end());

      int sz = unique (v.begin(), v.end()) - v.begin();


      if (sz == 1 || sz ==2) cout << "Yes" << '\n';

      else if ( sz%2 != 0) cout << "No" << '\n';

      else
      {
        cout << "dont know" << '\n';
      }


      v.clear();
  }



  return 0;
}

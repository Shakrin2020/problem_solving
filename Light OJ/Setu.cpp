#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
   cin>>cases;

    for(int casenum=1; casenum <= cases; casenum++)
    {   int N;
        cin>>N;
        int account=0;
        cout<<"Case "<<casenum<<":\n";

        for(int i=0; i<N; i++)
        {  string str;

          cin>>str;
          if (str=="donate")
          {   int K;
             cin>>K;
             if(100<=K && K<=100000)
             {
              account+=K;
            }
             else break;
          }
          if(str=="report")

             {
                cout<<account<<"\n";
             }
         }
}
return 0;
}

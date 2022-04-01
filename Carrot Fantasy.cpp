#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
       optimize();

       bool flag;
       int  r, c;

       cin >> r >> c;

       char arr[r][c];

       for (int i =0; i < r; i++)
       {
           for (int j =0; j < c; j++) cin >> arr[i][j];
       }

       for (int i =0; i < r; i++)
         {
           for (int j =0; j < c; j++)
           {
               flag = true;

               if ( arr[i][j] == 'R')
               {
                  if ( i-1 >= 0 )
                  {
                    if (arr[i-1][j] == 'C')
                    {
                        flag =false;
                        break;
                    }
                    else if (arr[i-1][j] != 'R')
                    {
                        arr[i-1][j] = '#';
                    }
                  }

                  if ( j-1 >= 0 )
                   {
                     if (arr[i][j-1] == 'C')
                      {
                        flag =false;
                        break;
                       }

                     else if (arr[i][j-1] != 'R')
                     {
                         arr[i][j-1] = '#';
                     }
                   }


                  if ( i+1 < r )
                  {
                    if (arr[i+1][j] == 'C')
                    {
                        flag =false;
                        break;
                    }

                    else if( arr[i+1][j] != 'R')
                    {
                        arr[i+1][j] = '#';
                    }
                  }


                  if ( j+1 < c )
                   {
                     if (arr[i][j+1] == 'C')
                    {
                        flag =false;
                        break;
                    }

                     else if (arr[i][j+1] != 'R')
                     {
                         arr[i][j+1] = '#';
                     }
                    }
                   }
                }

                if (flag == false) break;

             }
        if (flag)
        {
            cout << "Yes" << '\n';

            for (int i =0; i < r; i++)
            {
               for (int j =0; j < c; j++) cout <<  arr[i][j];

               cout << '\n'; ;
             }
        }

        else cout << "No";
        return 0;
}

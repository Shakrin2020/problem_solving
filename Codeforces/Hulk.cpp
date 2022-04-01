#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    string str = "";

    int n;

    cin >> n;

    string arr[2];

    arr[0] = " that I love";
    arr[1] = " that I hate";

    for (int i =0; i < n/2; i++)

    {
       for (int j =0; j < 2; j++)  str += arr[j];

    }

    if (n%2 != 0) cout <<"I hate" << str << " it";

    else
    {
      cout <<"I hate" ;
      for (int i =0; i < str.length()-12; i++) cout << str[i] ; // (-12) is to delete "that I hate"
      cout << " it";
    }

    return 0;
}




















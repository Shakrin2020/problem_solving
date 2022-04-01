#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int position(char ch, string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]==ch) return i+1;
    }
}

int main ()
{
     optimize();

     int t;
     cin >> t;

     while(t--)
        {
        string str,s;
        cin >> str >> s;

        int sum=0;

        if(s.size()==1) cout << 0 << '\n';

        else
        {
        for (int i=0; i<s.size()-1; i++){
            int  pos1 = position(s[i],str);
            int  pos2 = position(s[i+1],str);
            sum += abs(pos1 - pos2);
        }
        cout << sum << '\n';
        }

     }

     return 0;
}

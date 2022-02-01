#include<bits/stdc++.h>
using namespace std;
void solve()
 {
      string str;
      cin>>str;
      int coun  = 0;
      if(str.length()<3)
      {
          cout<<coun<<endl;
      } else{
       for(int i = 0; i < (str.length() - 2);i++)
        if(str[i] != str[i+1] && str[i] != str[i+2] && str[i+1] != str[i+2]) coun++;

       cout<<coun<<"\n";
 }
 }

int main()
{

    int t;
    cin>>t;
    while(t--)
        {
            solve();
        }
}

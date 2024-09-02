#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
   string str;
   while(getline(cin,str))
   {
    int n=str.size();
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++)
    {
       if( str[i]==' ') continue;
       else cout<<str[i];
    }
    cout<<endl;
   }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,test=0;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(s==arr[i]+arr[j]+arr[k])
                    {
                        test=1;
                        break;

                    }
                }
                if(test==1) break;
            }
         if(test==1) break;
        }
        if(test==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=n-1;i>=0;i--) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    char name[101];
    char section;
    int marks;
};
int main()
{
    // Write your code here
int t;
cin>>t;
while(t--)
{
    student s1,s2,s3;
    cin>>s1.id>>s1.name>>s1.section>>s1.marks;
      cin>>s2.id>>s2.name>>s2.section>>s2.marks;
         cin>>s3.id>>s3.name>>s3.section>>s3.marks;
         student high=s1;
         if(s2.marks>high.marks) high=s2;
         if(high.marks<s3.marks) high=s3;
         cout<<high.id<<" "<<high.name<<" "<<high.section<<" "<<high.marks<<endl;
}
}

/*
    Delete atleast one character and find the minimum sum.
    input:
    ------
    2 
    5
    auvak
    9 4 5 6 7
    4
    amid
    5 8 1 6
    
    output:
    -------
    6
    0

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>al(26,0);
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(al[s[i]-97]==0 && mp[s[i]]>1){
                al[s[i]-97]=a[i];
                mp[s[i]]--;
            }
            else if(al[s[i]-97]<a[i])
            continue;
            else if(al[s[i]-97]>a[i] && mp[s[i]]>=1){
            al[s[i]-97]=a[i];
            }            
        }
        int sum=0;
        for(int i=0;i<al.size();i++)
        {
            if(al[i]!=0)
            sum=sum+al[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
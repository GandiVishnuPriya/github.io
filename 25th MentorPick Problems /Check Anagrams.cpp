#include<bits/stdc++.h>
using namespace std;

bool isAna(string s1,string s2)
{
    int len1=s1.length();
    int len2 = s2.length();
    if(len1!=len2)
    return false;
    sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
    
     return s1==s2;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(isAna(s1,s2))
        cout<<"True\n";
        else
        cout<<"False\n";
    }
   // write your code here
    return 0;
}

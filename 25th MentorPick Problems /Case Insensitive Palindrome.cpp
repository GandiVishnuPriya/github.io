#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalin(string s)
{
    int l = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(isPalin(s))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}

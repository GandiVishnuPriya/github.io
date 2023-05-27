#include <bits/stdc++.h>
using namespace std;

void PairSum(long long k,vector<long long> a)
{
    int n=a.size();
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int ii,jj;
        int curr=a[i];
        if(s.count(curr))
        {
            
            int ii = i;
            //break;
         for(int j=i;j>=0;j--)
        {
         if(curr+a[j]==k)
         cout<<j;
        } 
        cout<<" "<<ii<<"\n";
        
        }
        
        
        else
        {
            s.insert(k-curr);
        }
    }
}

int main() {
  long long t;
  cin >> t;
  while (t--) {
     long long n, k;
    cin >> n >> k;
    vector< long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    PairSum(k,a);
    }
  

  return 0;
}

#include <bits/stdc++.h>
using namespace std;


int binarySearch(int T, vector<int> v){
    
    int low = 0;
    int high = v.size() -1;
    
    while(low<=high){
        int mid = low + (high -low)/2;
        
        if(v[mid]==T){
            return mid;
        }else if( v[low] <= v[mid]){
           
            if(v[low] <= T && v[mid]>= T){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            
            if(v[mid]<= T && v[high]>=T){
                low =  mid + 1;
            }else{
                high = mid -1;
            }
        }
        
    }
    
    return -1;
    
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        int m;
        cin>>m;
        cout<<binarySearch(m, v)<<"\n";
    }
   
  
   
}

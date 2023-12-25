#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        mp[z]=i;
    }
    
    
    int m;
    cin>>m;
    long long int start=0, end=0;
    
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        start += mp[b]+1;
        end += (n-1) -mp[b] +1; 
    }
    
    cout<<start<<" "<<end;
    
    return 0;
}

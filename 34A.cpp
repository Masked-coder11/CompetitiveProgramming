#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // vector<vector<int>>v;
    int x; cin>>x;
    int first=x;
    int last=x;
    
    int ans=1e9;
    int start=-1, end=-1;
    for(int i=2;i<=n;i++){
        cin>>x;
        
        if(abs(x-last) < ans){
            // cout<<i<<" "<<abs(x-last)<<" "<<ans<<endl;
            ans=abs(x-last);
            start=i-1;
            end=i;
        }
        if(i==n){
            // cout<<abs(x-first)<<" "<<ans<<endl;
            if(abs(x-first) < ans){
                ans=abs(x-last);
                start=i;
                end=1;
            }
            
        }
        last=x;
    }
    
    
    // sort(v.begin(), v.end());
    cout<<start<<" "<<end;
    
    return 0;
}

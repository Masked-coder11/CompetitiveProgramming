#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    unordered_map<string, int>mp;
    int ans=0;
    string res;
    for(int i=0;i<n;i++){
        string x; cin>>x;
        mp[x]++;
        if(mp[x]>ans){
            res=x;
            ans=mp[x];
        }
    }
    cout<<res;
    
    return 0;
}

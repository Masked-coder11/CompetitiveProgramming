#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(), v.end());
    
    if(v[1].first == v[0].first){
        cout<<"Still Rozdil";
    }
    else{
        cout<<v[0].second;
    }
    
    
    
    return 0;
}

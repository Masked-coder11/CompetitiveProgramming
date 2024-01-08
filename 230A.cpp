#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int s, n; cin>>s>>n;
    
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    sort(v.begin(), v.end());
    
    int check=0;
    for(int i=0;i<n;i++){
        if(s <= v[i].first){
            check=1;
            break;
        }
        else{
            s += v[i].second;
        }
    }
    
    if(check==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}

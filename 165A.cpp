#include<bits/stdc++.h>
using namespace std;

int main(){
    
    unordered_map<int,pair<int,int>>mpx;
    unordered_map<int,pair<int,int>>mpy;
    
    int ans=0;
    
    int n;
    cin>>n;
    
    vector<pair<int,int>>points;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        
        points.push_back({x,y});
        
        if(mpx.find(x)==mpx.end()){
            mpx[x]={y,y};
        }
        else{
            mpx[x].first=max(mpx[x].first,y); 
            mpx[x].second=min(mpx[x].second,y);
        }
        
        if(mpy.find(y)==mpy.end()){
            mpy[y]={x,x};
        }
        else{
            mpy[y].first=max(mpy[y].first,x); 
            mpy[y].second=min(mpy[y].second,x);
        }
    }
    
    for(auto it:points){
        int x=it.first;
        int y=it.second;
        
        //right neighbour    //left neigbour     upper
        if(mpy[y].first > x && mpy[y].second < x && mpx[x].first > y && mpx[x].second < y){
            ans++;
        }
    }
    
    cout<<ans;
    
    
    
    return 0;
}

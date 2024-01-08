#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m; cin>>n>>m;
    priority_queue<int, vector<int>, greater<int> > pq_mini;
    priority_queue<int>pq_maxi;
    for(int i=0;i<m;i++){
        int z;
        cin>>z;
        pq_mini.push(z);
        pq_maxi.push(z);
    }
    
    
    int mini=0, maxi=0;
    for(int i=0;i<n;i++){
        int mini_top = pq_mini.top();
        pq_mini.pop();
        mini+=mini_top;
        mini_top--;
        if(mini_top > 0){
            pq_mini.push(mini_top);
        }
        
        
        int maxi_top = pq_maxi.top();
        pq_maxi.pop();
        maxi+=maxi_top;
        maxi_top--;
        if(maxi_top > 0){
            pq_maxi.push(maxi_top);
        }
    }
    
    
    
    cout<<maxi << " "<<mini;
}

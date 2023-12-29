#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    int pos=1;
    long long int ans=0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        
        if(pos<x){
            ans+=x-pos;
            pos=x;
        }
        else if(pos>x){
            ans+= n-pos + x;
            pos=x;
            
        }
    }
    cout<<ans;
    
    return 0;
}

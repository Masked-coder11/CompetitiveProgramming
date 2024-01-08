#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m; cin>>n>>m;
    
    int rootn = sqrt(n);
    
    int ans=0;
    
    for(int a=0;a<=rootn;a++){
        int b = n - a*a;
        
        if(b*b + a == m){
            ans++;
        }
    }
    
    cout<<ans;
    
    return 0;
}

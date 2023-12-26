#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        sum+=z;
    }
    
    //ap is a=n+2,  d=n+1;
    
    int ans=0;
    for(int i=1;i<=5;i++){
        int final= sum+i;
        if( (final - (n+2))%(n+1) != 0 ){
            ans++;
            // break;
        }
    }
    
    cout<<ans;
    
    
    return 0;
}

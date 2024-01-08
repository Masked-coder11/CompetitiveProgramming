#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, a, b;
    cin>>n>>a>>b;
    
    int ans=0;
    int x=a;
    int y=n-1-x;
    while(y>b){
        y--;
        x++;
    }
    while(y>=0){
        ans++;
        x++;
        y--;
    }
    cout<<ans;
    
    
    
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    int ans=0;
    for(int i=0;i<n;i++){
        int a, b, c;
        int count=0;
        cin>>a>>b>>c;
        if(a) count++;
        if(b) count++;
        if(c) count++;
        
        if(count >= 2){
            ans++;
        }
    }
    
    cout<<ans;
    
    return 0;
}

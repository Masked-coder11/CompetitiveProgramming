#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m; cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+m);
    int ans=INT_MAX;
    
    int i=0, j=n-1;
    while(j<m){
        ans = min(ans, arr[j]-arr[i]);
        i++;
        j++;
    }
    
    cout<<ans<<endl;
    
    return 0;
}

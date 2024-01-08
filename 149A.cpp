#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int k; cin>>k;
    int arr[12];
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }
    sort(arr, arr+12);
    
    int i=11;
    int sum=0;
    int ans=0;
    while(sum<k && i>=0){
        sum+=arr[i];
        i--;
        ans++;
    }
    if(sum<k){
        ans=-1;
    }
    cout<<ans;
    
    return 0;
}

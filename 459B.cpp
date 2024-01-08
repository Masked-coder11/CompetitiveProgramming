#include<bits/stdc++.h>
using namespace std;


int main(){
    
    long long int n; cin>>n;
    long long int maxi=INT_MIN, mini=INT_MAX;
    long long int arr[n];
    for(int i=0;i<n;i++){
        long long int x=0;
        cin>>x;
        
        arr[i]=x;
        
        maxi = max(maxi, x);
        mini = min(mini, x);
    }
    
    long long int a=0, b=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==maxi) a++;
        if(arr[i]==mini) b++;
    }
    
    cout<<maxi-mini<<" ";
    
    if(maxi == mini){
        cout<< n*(n-1)/2;
    }
    else{
        cout<< a*b;
    }
    
    return 0;
}

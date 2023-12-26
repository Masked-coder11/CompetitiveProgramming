#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin>>n>>m;
    
    int maxi=0,ind=-1;
    for(int i=0;i<n;i++){
        float x;
        cin>>x;
        
        int a=ceil(x/m);
        if(a>=maxi){
            maxi=a;
            ind=i;
        }
    }
    
    cout<<ind+1;
    
    
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    vector<double>a;
    
    int m;
    vector<double>b;
    
    cin>>n;
    for(int i=0;i<n;i++){
        double x; cin>>x;
        a.push_back(x);
    }
    
    cin>>m;
    for(int i=0;i<m;i++){
        double x; cin>>x;
        b.push_back(x);
    }
    
    float value=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            float x=b[j]/a[i];
            // cout<<x<<" ";
            if(ceil(x)==x){
                if(x>value){
                    value=x;
                }
            }
            // cout<<value<<endl;
        }
    }
    
    
    
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            float x=b[j]/a[i];
            if(ceil(x)==x && x==value){
                ans++;
            }
        }
    }
    
    cout<<ans;
    
    
    
    return 0;
}

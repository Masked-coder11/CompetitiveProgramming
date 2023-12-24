// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int left_open=0;
    int left_closed=0;
    
    int right_open=0;
    int right_closed=0;
    
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(l==1){
            left_open++;
        }
        else{
            left_closed++;
        }
        
        if(r==1){
            right_open++;
        }
        else{
            right_closed++;
        }
    }
    
    int ans=0;
    if(left_open >= left_closed){
        ans+=left_closed;
    }
    else{
        ans+=left_open;
    }
    
    if(right_open >= right_closed){
        ans+=right_closed;
    }
    else{
        ans+=right_open;
    }
    
    cout<<ans;
    
    
    return 0;
}

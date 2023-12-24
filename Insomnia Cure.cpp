// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    int ans=0;
    for(int i=1;i<=d;i++){
        if(i%k==0){
            ans++;
        }
        else if(i%l==0){
            ans++;
        }
        else if(i%m==0){
            ans++;
        }
        else if(i%n==0){
            ans++;
        }
    }
    
    cout<<ans;
    
    
    return 0;
}

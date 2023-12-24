// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    int best, worst;
    
    int first;
    cin>>first;
    
    best=first; worst=first;
    
    int ans=0;
    
    for(int i=1;i<n;i++){
        int score;
        cin>>score;
        if(score > best) {ans++;best=score;}
        if(score < worst) {ans++;worst=score;}
    }
    
    cout<<ans;
    
    
    return 0;
}

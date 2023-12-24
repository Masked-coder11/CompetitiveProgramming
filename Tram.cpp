// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    int ans=0;
    int passengers=0;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        passengers -=a;
        passengers +=b;
        ans= max(ans, passengers);
    }
    
    cout<<ans;
    
    
    return 0;
}

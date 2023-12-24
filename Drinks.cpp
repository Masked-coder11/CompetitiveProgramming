// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int n;
    cin>>n;
    float y=0;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        y+=z;
    }
    
    cout<<y/n;
    
    
    return 0;
}

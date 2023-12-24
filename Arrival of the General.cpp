// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int findNearest(vector<int>&v, int target, int n, int flow){
    if(flow==0){
        //start->end
        for(int i=0;i<n;i++){
            if(v[i]==target){
                return i;
            }
        }
    }
    else{
        //end->start
        for(int i=n-1;i>=0;i--){
            if(v[i]==target){
                return i;
            }
        }
        
    }
}

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int n;
    cin>>n;
    vector<int>v;
    int maxi=-1e9;
    int mini=1e9;
    for(int i=0; i<n; i++){
        int z;
        cin>>z;
        v.push_back(z);
        maxi=max(maxi,z);
        mini=min(mini,z);
    }
    
    //correcting the position of longest height
    int ans=0;
    int ind_max=findNearest(v, maxi, n, 0);
    int ind_min=findNearest(v, mini, n, 1);
    
    if(ind_max>ind_min){
        ans--;
    }
    
    ans+=ind_max + n-1 - ind_min;
    // if(v[0]!=maxi){
        
    //     int i=ind;
    //     while(i>0){
            
    //     }
    //     ans+=ind;
    // }
    
    // //correcting the position of the shortest height
    // if(v[n-1]!=mini){
        
    //     ans+=n-1 - ind;
    // }
    
    cout<<ans;
    
    
    return 0;
}

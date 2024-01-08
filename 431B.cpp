#include<bits/stdc++.h>
using namespace std;


int main(){
    
    vector<vector<int>>v(5, vector<int>(5,0));
    
    int arr[]={0,1,2,3,4};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
        }
    }
    
    long long int ans=INT_MIN;
    
    for(int i=0;i<120;i++){
        // calculating sum;
        long long int curr=0;
        curr+=v [arr[0]] [arr[1]] + v[arr[1]] [arr[0]];
        curr+=v [arr[1]] [arr[2]] + v[arr[2]] [arr[1]];
        
        curr+=2*(v [arr[2]] [arr[3]] + v[arr[3]] [arr[2]]);
        curr+=2*(v [arr[3]] [arr[4]] + v[arr[4]] [arr[3]]);
        
        ans = max(ans, curr);
        
        next_permutation(arr, arr+5);
        
    }
    
    cout<<ans;
    
    
    return 0;
}

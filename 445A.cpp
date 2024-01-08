#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>& arr, int n, int m, vector<vector<int>>& vis, char mode, int i, int j){
    vis[i][j] = 1;
    arr[i][j] = mode;
    
    if(mode=='W') mode='B';
    else if(mode=='B') mode='W';
    
    int nrow, ncol;
    
    nrow=i-1; ncol=j;
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && arr[nrow][ncol]=='.' && vis[nrow][ncol]==0){
        dfs(arr, n, m, vis, mode, nrow, ncol);
    }
    
    nrow=i+1; ncol=j;
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && arr[nrow][ncol]=='.' && vis[nrow][ncol]==0){
        dfs(arr, n, m, vis, mode, nrow, ncol);
    }
    
    nrow=i; ncol=j-1;
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && arr[nrow][ncol]=='.' && vis[nrow][ncol]==0){
        dfs(arr, n, m, vis, mode, nrow, ncol);
    }
    
    nrow=i; ncol=j+1;
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && arr[nrow][ncol]=='.' && vis[nrow][ncol]==0){
        dfs(arr, n, m, vis, mode, nrow, ncol);
    }
    
    return;
}

int main(){
    
    int n, m; cin>>n>>m;
    
    vector<vector<char>>arr(n, vector<char>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    vector<vector<int>>vis(n, vector<int>(m,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && arr[i][j]=='.'){
                dfs(arr, n, m, vis, 'W', i, j);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}

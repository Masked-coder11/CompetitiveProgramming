#include<bits/stdc++.h>
using namespace std;

void toggle(vector<vector<int>>&grid, int row, int col, int presses){
    
    if(presses%2==1){
        grid[row][col]=!grid[row][col];
        
        int nrow=row-1;
        int ncol=col;
        if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3){
            grid[nrow][ncol]=!grid[nrow][ncol];
        }
        
        
        nrow=row+1;
        ncol=col;
        if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3){
            grid[nrow][ncol]=!grid[nrow][ncol];
        }
        
        nrow=row;
        ncol=col-1;
        if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3){
            grid[nrow][ncol]=!grid[nrow][ncol];
        }
        
        nrow=row;
        ncol=col+1;
        if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3){
            grid[nrow][ncol]=!grid[nrow][ncol];
        }
    }
}

int main(int argc, char const *argv[])
{
    
    
    vector<vector<int>>grid(3,vector<int>(3,1));
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            if(x%2==1){
                toggle(grid,i,j,x);
            }
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    
    
    
    
    
    

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    
    //printing upward portion and center row
    for(int i=0;i<2*n;i++){
        cout<<" ";
    }
    cout<<"0\n";
    int spaces=2*n-2;
    int row=1;
    for(int i=1;i<=n;i++){
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        for(int i=0;i<=row;i++){
            cout<<i<<" ";
        }
        for(int i=row-1;i>=0;i--){
            cout<<i;
            if(i!=0){
                cout<<' ';
            }
        }
        
        cout<<endl;
        
        spaces-=2;
        row++;
    }
    
    // printing lower portion;
    spaces=2;
    row=n-1;
    for(int i=0;i<n-1;i++){
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        for(int i=0;i<=row;i++){
            cout<<i<<" ";
        }
        for(int i=row-1;i>=0;i--){
            cout<<i;
            if(i!=0){
                cout<<' ';
            }
        }
        
        cout<<endl;
        
        spaces+=2;
        row--;
    }
    for(int i=0;i<2*n;i++){
        cout<<" ";
    }
    cout<<"0\n";
    
    
    
    
    return 0;
}

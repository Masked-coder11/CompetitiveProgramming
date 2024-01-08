#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t, sx, sy, ex, ey;
    cin>>t>>sx>>sy>>ex>>ey;
    
    string s; cin>>s;
    int i=0;
    if(ey==sy && ex==sx){
        cout<<0;
        return 0;
    }
    
    while(i<t){
        if(s[i]=='N'){
            if(ey > sy){
                sy++;
            }
        }
        else if(s[i]=='S'){
            if(ey < sy){
                sy--;
            }
        }
        else if(s[i]=='E'){
            if(ex > sx){
                sx++;
            }
        }
        else if(s[i]=='W'){
            if(ex < sx){
                sx--;
            }
        }
        i++;
        
        if(ey==sy  && ex==sx){
            cout<<i;
            return 0;
        }
        
    }
    cout<<"-1";
    
    return 0;
}

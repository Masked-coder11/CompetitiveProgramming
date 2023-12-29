#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='1' || s[i]=='4') continue;
        else{
            cout<<"NO";
            return 0;
        }
    }
    int i=0;
    while(i<s.length()){
        bool first=(s[i]=='1');
        bool second=(s[i+1]=='1');
        bool third=(s[i+2]=='1');
        bool fourth=(s[i+3]=='1');
        
        // cout<<i<<" ";
        if(!first){
            cout<<"NO";
            return 0;
        }
        if(!second){
            if(third){
                i=i+2;
                continue;
            }
            else{
                i=i+3;
                continue;
            }
        }
        else{
            i=i+1;
            continue;
        }
        
    }
    cout<<"YES";
    
    return 0;
}

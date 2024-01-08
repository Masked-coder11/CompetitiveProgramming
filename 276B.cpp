#include<bits/stdc++.h>
using namespace std;


int main(){
    
    string s; cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int odds=0;
    for(auto it:mp){
        if(it.second%2==1){
            odds++;
        }
    }
    odds--;
    
    if(odds%2 == 1){
        cout<<"Second";
    }
    else{
        cout<<"First";
    }
}

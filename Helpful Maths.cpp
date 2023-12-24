// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    
    string s;
    cin>>s;
    
    vector<int>v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            v.push_back(1);
        }
        else if(s[i]=='2'){
            v.push_back(2);
        }
        else if(s[i]=='3'){
            v.push_back(3);
        }
        else{
            continue;
        }
    }
    sort(v.begin(), v.end());
    
    string ans="";
    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            ans+='1';
            if(i!=v.size()-1){
                ans+='+';
            }
        }
        else if(v[i]==2){
            ans+='2';
            if(i!=v.size()-1){
                ans+='+';
            }
        }
        else{
            ans+='3';
            if(i!=v.size()-1){
                ans+='+';
            }
        }
    }
    
    cout<<ans;
    
    
    
    return 0;
}

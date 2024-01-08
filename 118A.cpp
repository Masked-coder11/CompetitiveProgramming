#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<char>st={'A','O','Y','E','U','I','a','o','y','e','u','i'};
    string ans="";
    string s; cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(st.find(s[i]) == st.end()){
            ans+='.';
            if(s[i]>='A' && s[i]<='Z'){
                int x= s[i]-'A';
                s[i]='a'+x;
            }
            ans+=s[i];
        }
    }
    cout<<ans;
    
    return 0;
}

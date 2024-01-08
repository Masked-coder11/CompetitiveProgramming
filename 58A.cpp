#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string req="hello";
    int curr=0;
    
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
        if(curr>=req.length()){
            break;
        }
        if(s[i]==req[curr]){
            curr++;
        }
    }
    
    if(curr >=req.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}

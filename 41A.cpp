#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t; cin>>s>>t;
    if(s.length() != t.length()){
        cout<<"NO";
    }
    else{
        int i=0, j=s.length()-1;
        while(i<s.length()){
            if(s[i]!=t[j]){
                cout<<"NO";
                return 0;
            }
            i++; j--;
        }
        
        cout<<"YES";
    }
    
    return 0;
}

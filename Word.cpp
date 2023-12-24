#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    
    
    string s;
    cin>>s;
    
    int n=s.length();
    int lower=0;
    int upper=0;
    
    
    
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
        else{
            upper++;
        }
    }
    
    if(lower>=upper){
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                int x=s[i]-'A';
                s[i]=char('a'+x);
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                int x=s[i]-'a';
                s[i]=char('A'+x);
            }
        }
    }
    
    cout<<s;
    
    return 0;
}
